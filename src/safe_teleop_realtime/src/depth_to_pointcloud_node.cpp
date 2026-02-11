/**
 * depth_to_pointcloud_node.cpp - Convert depth images to point clouds
 *
 * Converts depth images from Isaac Sim cameras to PointCloud2 format
 * for collision detection. Runs on slave for low-latency local processing.
 *
 * Input:  /camera_eef/depth/image_rect_raw (sensor_msgs/msg/Image)
 *         /camera_eef/color/camera_info (sensor_msgs/msg/CameraInfo)
 * Output: /camera/depth/points (sensor_msgs/msg/PointCloud2)
 */

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>

#include <memory>
#include <chrono>

namespace safe_teleop {

/**
 * Converts depth images to organized point clouds using camera intrinsics
 */
class DepthToPointCloudNode : public rclcpp::Node {
public:
    DepthToPointCloudNode() : Node("depth_to_pointcloud_node") {
        // Declare parameters
        this->declare_parameter("depth_topic", "/camera_eef/depth/image_rect_raw");
        this->declare_parameter("camera_info_topic", "/camera_eef/color/camera_info");
        this->declare_parameter("output_topic", "/camera/depth/points");
        this->declare_parameter("output_frame_id", "camera_color_optical_frame");
        this->declare_parameter("max_depth", 10.0);  // meters
        this->declare_parameter("min_depth", 0.1);   // meters

        // Get parameters
        auto depth_topic = this->get_parameter("depth_topic").as_string();
        auto camera_info_topic = this->get_parameter("camera_info_topic").as_string();
        auto output_topic = this->get_parameter("output_topic").as_string();
        output_frame_id_ = this->get_parameter("output_frame_id").as_string();
        max_depth_ = this->get_parameter("max_depth").as_double();
        min_depth_ = this->get_parameter("min_depth").as_double();

        // Subscribers
        depth_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
            depth_topic,
            rclcpp::SensorDataQoS(),
            std::bind(&DepthToPointCloudNode::depth_callback, this, std::placeholders::_1)
        );

        camera_info_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>(
            camera_info_topic,
            rclcpp::QoS(10).reliable(),
            std::bind(&DepthToPointCloudNode::camera_info_callback, this, std::placeholders::_1)
        );

        // Publisher
        pointcloud_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(
            output_topic,
            rclcpp::SensorDataQoS()
        );

        RCLCPP_INFO(this->get_logger(), "DepthToPointCloud initialized");
        RCLCPP_INFO(this->get_logger(), "  Depth topic: %s", depth_topic.c_str());
        RCLCPP_INFO(this->get_logger(), "  Camera info topic: %s", camera_info_topic.c_str());
        RCLCPP_INFO(this->get_logger(), "  Output topic: %s", output_topic.c_str());
        RCLCPP_INFO(this->get_logger(), "  Depth range: %.2f - %.2f m", min_depth_, max_depth_);
    }

private:
    void camera_info_callback(const sensor_msgs::msg::CameraInfo::SharedPtr msg) {
        if (!camera_info_received_) {
            camera_info_ = msg;
            camera_info_received_ = true;

            // Extract intrinsics
            fx_ = msg->k[0];  // K[0,0]
            fy_ = msg->k[4];  // K[1,1]
            cx_ = msg->k[2];  // K[0,2]
            cy_ = msg->k[5];  // K[1,2]

            RCLCPP_INFO(this->get_logger(), "Camera intrinsics received:");
            RCLCPP_INFO(this->get_logger(), "  fx=%.2f, fy=%.2f, cx=%.2f, cy=%.2f",
                        fx_, fy_, cx_, cy_);
        }
    }

    void depth_callback(const sensor_msgs::msg::Image::SharedPtr depth_msg) {
        if (!camera_info_received_) {
            if (!warned_no_camera_info_) {
                RCLCPP_WARN(this->get_logger(), "No camera info received yet, skipping conversion");
                warned_no_camera_info_ = true;
            }
            return;
        }

        auto start_time = std::chrono::steady_clock::now();

        // Create PointCloud2 message
        auto cloud_msg = std::make_shared<sensor_msgs::msg::PointCloud2>();
        cloud_msg->header = depth_msg->header;
        // Use depth image's frame_id directly (e.g., "camera_eef_depth_optical_frame")
        // This frame is already published in TF tree by Isaac Sim
        // DO NOT override with output_frame_id_ - it causes TF lookup failures
        cloud_msg->height = depth_msg->height;
        cloud_msg->width = depth_msg->width;
        cloud_msg->is_dense = false;
        cloud_msg->is_bigendian = false;

        // Setup fields
        sensor_msgs::PointCloud2Modifier modifier(*cloud_msg);
        modifier.setPointCloud2FieldsByString(1, "xyz");

        // Iterators for XYZ
        sensor_msgs::PointCloud2Iterator<float> iter_x(*cloud_msg, "x");
        sensor_msgs::PointCloud2Iterator<float> iter_y(*cloud_msg, "y");
        sensor_msgs::PointCloud2Iterator<float> iter_z(*cloud_msg, "z");

        // Check depth image encoding
        float depth_scale = 1.0f;

        if (depth_msg->encoding == "32FC1") {
            // Depth in meters (float32)
            depth_scale = 1.0f;
        } else if (depth_msg->encoding == "16UC1") {
            // Depth in millimeters (uint16)
            depth_scale = 0.001f;
        } else {
            RCLCPP_ERROR(this->get_logger(), "Unsupported depth encoding: %s",
                         depth_msg->encoding.c_str());
            return;
        }

        // Convert to point cloud
        size_t valid_points = 0;
        const size_t height = depth_msg->height;
        const size_t width = depth_msg->width;

        for (size_t v = 0; v < height; ++v) {
            for (size_t u = 0; u < width; ++u) {
                float depth;

                if (depth_msg->encoding == "32FC1") {
                    depth = reinterpret_cast<const float*>(depth_msg->data.data())[v * width + u];
                } else {
                    // 16UC1
                    uint16_t depth_raw = reinterpret_cast<const uint16_t*>(depth_msg->data.data())[v * width + u];
                    depth = static_cast<float>(depth_raw) * depth_scale;
                }

                // Skip invalid depths
                if (!std::isfinite(depth) || depth < min_depth_ || depth > max_depth_) {
                    *iter_x = std::numeric_limits<float>::quiet_NaN();
                    *iter_y = std::numeric_limits<float>::quiet_NaN();
                    *iter_z = std::numeric_limits<float>::quiet_NaN();
                } else {
                    // Project to 3D using pinhole camera model
                    // X = (u - cx) * Z / fx
                    // Y = (v - cy) * Z / fy
                    // Z = depth
                    *iter_x = (static_cast<float>(u) - cx_) * depth / fx_;
                    *iter_y = (static_cast<float>(v) - cy_) * depth / fy_;
                    *iter_z = depth;
                    valid_points++;
                }

                ++iter_x;
                ++iter_y;
                ++iter_z;
            }
        }

        // Publish point cloud
        pointcloud_pub_->publish(*cloud_msg);

        // Performance monitoring
        auto end_time = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
            end_time - start_time).count();

        if (duration > 20) {  // Warn if >20ms
            RCLCPP_WARN(this->get_logger(),
                "Depth conversion took %ld ms (target: <20ms)", duration);
        }

        // Periodic statistics
        total_conversions_++;
        if (total_conversions_ % 100 == 0) {
            RCLCPP_INFO(this->get_logger(),
                "Converted depth image %lux%lu to point cloud with %zu valid points (took %ld ms)",
                width, height, valid_points, duration);
        }
    }

    // Subscribers
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_sub_;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr camera_info_sub_;

    // Publisher
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_pub_;

    // Camera intrinsics
    sensor_msgs::msg::CameraInfo::SharedPtr camera_info_;
    bool camera_info_received_ = false;
    bool warned_no_camera_info_ = false;
    float fx_, fy_, cx_, cy_;

    // Parameters
    std::string output_frame_id_;
    double max_depth_;
    double min_depth_;

    // Statistics
    uint64_t total_conversions_ = 0;
};

}  // namespace safe_teleop

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<safe_teleop::DepthToPointCloudNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
