/**
 * collision_detector_node.cpp - Real-time collision detection with Failsafe
 *
 * Implements 3-layer safety architecture (ARCHITECTURE_DECISION.md Decision 4):
 * - Layer 1: Point Cloud direct analysis (always active, <10ms)
 * - Layer 2: ESDF-based collision (preferred, from master)
 * - Layer 3: Degraded mode (cached ESDF + conservative margins)
 *
 * Design goals:
 * - <50ms latency for collision warnings
 * - Failsafe operation during master disconnection
 * - No single point of failure
 */

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <nvblox_msgs/msg/distance_map_slice.hpp>

#include <safe_teleop_core/msg/collision_warning.hpp>
#include <safe_teleop_core/msg/object_status.hpp>
#include <safe_teleop_core/msg/safety_status.hpp>

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>

#include <Eigen/Dense>
#include <memory>
#include <chrono>

namespace safe_teleop {

/**
 * Safety modes for slave system
 */
enum class SafetyMode {
    NORMAL,        // Master connected, ESDF fresh
    DEGRADED,      // Master disconnected, using cached ESDF
    EMERGENCY      // Sensor failure, immediate stop required
};

/**
 * Real-time collision detector with multi-layer safety
 */
class CollisionDetectorNode : public rclcpp::Node {
public:
    CollisionDetectorNode() : Node("collision_detector_node") {
        // Declare parameters
        this->declare_parameter("safety_margin", 0.3);  // meters
        this->declare_parameter("critical_distance", 0.15);  // meters
        this->declare_parameter("esdf_timeout_sec", 5.0);
        this->declare_parameter("pointcloud_timeout_sec", 1.0);
        this->declare_parameter("degraded_margin_multiplier", 2.0);
        this->declare_parameter("emergency_velocity_limit", 0.05);  // m/s

        // Get parameters
        safety_margin_ = this->get_parameter("safety_margin").as_double();
        critical_distance_ = this->get_parameter("critical_distance").as_double();
        esdf_timeout_ = this->get_parameter("esdf_timeout_sec").as_double();
        pointcloud_timeout_ = this->get_parameter("pointcloud_timeout_sec").as_double();
        degraded_multiplier_ = this->get_parameter("degraded_margin_multiplier").as_double();
        emergency_vel_limit_ = this->get_parameter("emergency_velocity_limit").as_double();

        // === Subscribers ===
        // Layer 1: Point Cloud (always active)
        pointcloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/camera/depth/points",
            rclcpp::SensorDataQoS(),
            std::bind(&CollisionDetectorNode::pointcloud_callback, this, std::placeholders::_1)
        );

        // Layer 2: ESDF from master (via WiFi)
        esdf_sub_ = this->create_subscription<nvblox_msgs::msg::DistanceMapSlice>(
            "/safe_teleop/esdf_for_slave",
            rclcpp::QoS(10).reliable(),
            std::bind(&CollisionDetectorNode::esdf_callback, this, std::placeholders::_1)
        );

        // Robot state
        robot_pose_sub_ = this->create_subscription<geometry_msgs::msg::Pose>(
            "/robot/current_pose",
            10,
            std::bind(&CollisionDetectorNode::robot_pose_callback, this, std::placeholders::_1)
        );

        // === Publishers ===
        collision_warning_pub_ = this->create_publisher<safe_teleop_core::msg::CollisionWarning>(
            "/safe_teleop/collision_warning",
            rclcpp::QoS(10).reliable()
        );

        safety_status_pub_ = this->create_publisher<safe_teleop_core::msg::SafetyStatus>(
            "/safe_teleop/realtime_status",
            rclcpp::QoS(10).reliable()
        );

        // === Timers ===
        // Main collision detection loop (20Hz = 50ms cycle)
        collision_check_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(50),
            std::bind(&CollisionDetectorNode::collision_check_loop, this)
        );

        // Watchdog timer for master connection
        watchdog_timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&CollisionDetectorNode::watchdog_timer_callback, this)
        );

        // State initialization
        current_mode_ = SafetyMode::EMERGENCY;  // Start in emergency until sensors ready
        last_esdf_time_ = this->now();
        last_pointcloud_time_ = this->now();

        RCLCPP_INFO(this->get_logger(), "CollisionDetector initialized");
        RCLCPP_INFO(this->get_logger(), "  Safety margin: %.2f m", safety_margin_);
        RCLCPP_INFO(this->get_logger(), "  Critical distance: %.2f m", critical_distance_);
        RCLCPP_INFO(this->get_logger(), "  Mode: EMERGENCY (waiting for sensors)");
    }

private:
    // === Callbacks ===

    void pointcloud_callback(const sensor_msgs::msg::PointCloud2::SharedPtr msg) {
        latest_pointcloud_ = msg;
        last_pointcloud_time_ = this->now();

        // Convert to PCL for processing
        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
        pcl::fromROSMsg(*msg, *cloud);

        // Downsample for faster processing
        pcl::VoxelGrid<pcl::PointXYZ> voxel_filter;
        voxel_filter.setInputCloud(cloud);
        voxel_filter.setLeafSize(0.02f, 0.02f, 0.02f);  // 2cm voxels
        voxel_filter.filter(*cloud);

        latest_pointcloud_pcl_ = cloud;
    }

    void esdf_callback(const nvblox_msgs::msg::DistanceMapSlice::SharedPtr msg) {
        // Cache ESDF from master
        cached_esdf_ = msg;
        last_esdf_time_ = this->now();

        // Update mode to NORMAL if we were in DEGRADED
        if (current_mode_ == SafetyMode::DEGRADED) {
            current_mode_ = SafetyMode::NORMAL;
            RCLCPP_INFO(this->get_logger(), "Mode: NORMAL (master reconnected)");
        } else if (current_mode_ == SafetyMode::EMERGENCY) {
            // Check if we have point cloud too
            auto pc_elapsed = (this->now() - last_pointcloud_time_).seconds();
            if (pc_elapsed < pointcloud_timeout_) {
                current_mode_ = SafetyMode::NORMAL;
                RCLCPP_INFO(this->get_logger(), "Mode: NORMAL (all sensors ready)");
            }
        }
    }

    void robot_pose_callback(const geometry_msgs::msg::Pose::SharedPtr msg) {
        current_robot_pose_ = msg;
    }

    // === Main Collision Detection Loop ===

    void collision_check_loop() {
        auto start_time = std::chrono::steady_clock::now();

        if (!current_robot_pose_) {
            return;  // No robot pose yet
        }

        // Create warning message
        safe_teleop_core::msg::CollisionWarning warning;
        warning.header.stamp = this->now();
        warning.header.frame_id = "base_link";

        // === Layer 1: Point Cloud collision (always active) ===
        auto pc_collision = check_pointcloud_collision(*current_robot_pose_);

        if (pc_collision.severity >= safe_teleop_core::msg::CollisionWarning::CRITICAL) {
            // Immediate danger detected by local sensor!
            warning = pc_collision;
            warning.warning_source = "pointcloud";
            collision_warning_pub_->publish(warning);

            auto end_time = std::chrono::steady_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                end_time - start_time).count();

            if (duration > 10) {  // Log if >10ms
                RCLCPP_WARN(this->get_logger(),
                    "Layer 1 collision check took %ld ms", duration);
            }
            return;
        }

        // === Layer 2/3: ESDF-based collision ===
        double margin = safety_margin_;

        if (current_mode_ == SafetyMode::NORMAL) {
            // Use standard margin
            warning = check_esdf_collision(*current_robot_pose_, margin);
            warning.warning_source = "esdf";
        } else if (current_mode_ == SafetyMode::DEGRADED) {
            // Use conservative margin
            margin *= degraded_multiplier_;
            warning = check_esdf_collision(*current_robot_pose_, margin);
            warning.warning_source = "esdf_cached";
            warning.max_safe_velocity = emergency_vel_limit_;  // Limit speed
        } else {
            // EMERGENCY mode: stop everything
            warning.severity = safe_teleop_core::msg::CollisionWarning::CRITICAL;
            warning.emergency_stop_required = true;
            warning.max_safe_velocity = 0.0;
            warning.warning_source = "emergency_mode";
        }

        // Publish warning
        collision_warning_pub_->publish(warning);

        // Performance monitoring
        auto end_time = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
            end_time - start_time).count();

        if (duration > 50) {  // Warn if exceeding real-time budget
            RCLCPP_WARN(this->get_logger(),
                "Collision check took %ld ms (target: <50ms)", duration);
        }

        // Publish SafetyStatus (aggregate system health)
        safe_teleop_core::msg::SafetyStatus status;
        status.header.stamp = this->now();
        status.header.frame_id = "base_link";

        status.safety_mode = static_cast<uint8_t>(current_mode_);
        status.master_connected = (current_mode_ == SafetyMode::NORMAL);
        status.esdf_available = (cached_esdf_ != nullptr);
        status.pointcloud_available = (latest_pointcloud_pcl_ && !latest_pointcloud_pcl_->empty());
        status.emergency_stop_active = (current_mode_ == SafetyMode::EMERGENCY);

        status.esdf_age_sec = (this->now() - last_esdf_time_).seconds();
        status.pointcloud_age_sec = (this->now() - last_pointcloud_time_).seconds();
        status.last_collision_check_ms = duration;

        status.active_collision_severity = warning.severity;
        status.min_distance_to_obstacle = warning.distance_to_collision;

        status.avg_collision_check_latency_ms = duration;  // Simplified: use current duration
        status.collision_checks_per_sec = 20;  // 20 Hz expected

        status.velocity_limit_active = (warning.velocity_reduction_required ||
                                        current_mode_ == SafetyMode::DEGRADED);
        status.max_safe_velocity = (current_mode_ == SafetyMode::DEGRADED)
                                   ? emergency_vel_limit_
                                   : warning.max_safe_velocity;

        safety_status_pub_->publish(status);
    }

    // === Collision Checking Methods ===

    safe_teleop_core::msg::CollisionWarning check_pointcloud_collision(
        const geometry_msgs::msg::Pose& robot_pose) {

        safe_teleop_core::msg::CollisionWarning warning;
        warning.severity = safe_teleop_core::msg::CollisionWarning::NONE;
        warning.distance_to_collision = 100.0;  // Large default
        warning.emergency_stop_required = false;

        if (!latest_pointcloud_pcl_ || latest_pointcloud_pcl_->empty()) {
            return warning;
        }

        // Simple check: find closest point to robot
        double min_distance = 100.0;
        Eigen::Vector3f robot_pos(
            robot_pose.position.x,
            robot_pose.position.y,
            robot_pose.position.z
        );

        for (const auto& point : *latest_pointcloud_pcl_) {
            if (!std::isfinite(point.x)) continue;

            Eigen::Vector3f pt(point.x, point.y, point.z);
            double dist = (pt - robot_pos).norm();

            if (dist < min_distance) {
                min_distance = dist;
            }
        }

        warning.distance_to_collision = min_distance;

        // Classify severity
        if (min_distance < critical_distance_) {
            warning.severity = safe_teleop_core::msg::CollisionWarning::CRITICAL;
            warning.emergency_stop_required = true;
        } else if (min_distance < safety_margin_) {
            warning.severity = safe_teleop_core::msg::CollisionWarning::HIGH;
            warning.velocity_reduction_required = true;
            warning.max_safe_velocity = 0.1;  // 10 cm/s
        } else if (min_distance < safety_margin_ * 1.5) {
            warning.severity = safe_teleop_core::msg::CollisionWarning::MEDIUM;
        }

        return warning;
    }

    safe_teleop_core::msg::CollisionWarning check_esdf_collision(
        const geometry_msgs::msg::Pose& robot_pose,
        double margin) {

        safe_teleop_core::msg::CollisionWarning warning;
        warning.severity = safe_teleop_core::msg::CollisionWarning::NONE;
        warning.distance_to_collision = 100.0;
        warning.emergency_stop_required = false;

        if (!cached_esdf_) {
            // No ESDF available
            warning.severity = safe_teleop_core::msg::CollisionWarning::MEDIUM;
            return warning;
        }

        // TODO: Query ESDF for distance
        // For now, placeholder implementation
        double esdf_distance = 1.0;  // Placeholder

        warning.distance_to_collision = esdf_distance;

        if (esdf_distance < critical_distance_) {
            warning.severity = safe_teleop_core::msg::CollisionWarning::CRITICAL;
            warning.emergency_stop_required = true;
        } else if (esdf_distance < margin) {
            warning.severity = safe_teleop_core::msg::CollisionWarning::HIGH;
            warning.velocity_reduction_required = true;
        } else if (esdf_distance < margin * 1.5) {
            warning.severity = safe_teleop_core::msg::CollisionWarning::MEDIUM;
        }

        return warning;
    }

    // === Watchdog Timer ===

    void watchdog_timer_callback() {
        auto esdf_elapsed = (this->now() - last_esdf_time_).seconds();
        auto pc_elapsed = (this->now() - last_pointcloud_time_).seconds();

        // Check ESDF freshness
        if (esdf_elapsed > esdf_timeout_ && current_mode_ == SafetyMode::NORMAL) {
            current_mode_ = SafetyMode::DEGRADED;
            RCLCPP_WARN(this->get_logger(),
                "Master connection lost (%.1fs) - entering DEGRADED mode", esdf_elapsed);
        }

        // Check Point Cloud freshness
        if (pc_elapsed > pointcloud_timeout_) {
            if (current_mode_ != SafetyMode::EMERGENCY) {
                current_mode_ = SafetyMode::EMERGENCY;
                RCLCPP_ERROR(this->get_logger(),
                    "Point cloud timeout (%.1fs) - entering EMERGENCY mode", pc_elapsed);
            }
        }

        // Log status periodically
        RCLCPP_INFO(this->get_logger(),
            "[Status] Mode: %s, ESDF age: %.1fs, PointCloud age: %.1fs",
            mode_to_string(current_mode_).c_str(), esdf_elapsed, pc_elapsed);
    }

    std::string mode_to_string(SafetyMode mode) {
        switch (mode) {
            case SafetyMode::NORMAL: return "NORMAL";
            case SafetyMode::DEGRADED: return "DEGRADED";
            case SafetyMode::EMERGENCY: return "EMERGENCY";
            default: return "UNKNOWN";
        }
    }

    // === Member variables ===

    // Subscribers
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_sub_;
    rclcpp::Subscription<nvblox_msgs::msg::DistanceMapSlice>::SharedPtr esdf_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr robot_pose_sub_;

    // Publishers
    rclcpp::Publisher<safe_teleop_core::msg::CollisionWarning>::SharedPtr collision_warning_pub_;
    rclcpp::Publisher<safe_teleop_core::msg::SafetyStatus>::SharedPtr safety_status_pub_;

    // Timers
    rclcpp::TimerBase::SharedPtr collision_check_timer_;
    rclcpp::TimerBase::SharedPtr watchdog_timer_;

    // State
    SafetyMode current_mode_;
    sensor_msgs::msg::PointCloud2::SharedPtr latest_pointcloud_;
    pcl::PointCloud<pcl::PointXYZ>::Ptr latest_pointcloud_pcl_;
    nvblox_msgs::msg::DistanceMapSlice::SharedPtr cached_esdf_;
    geometry_msgs::msg::Pose::SharedPtr current_robot_pose_;

    rclcpp::Time last_esdf_time_;
    rclcpp::Time last_pointcloud_time_;

    // Parameters
    double safety_margin_;
    double critical_distance_;
    double esdf_timeout_;
    double pointcloud_timeout_;
    double degraded_multiplier_;
    double emergency_vel_limit_;
};

}  // namespace safe_teleop

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<safe_teleop::CollisionDetectorNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
