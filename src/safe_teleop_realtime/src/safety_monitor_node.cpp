/**
 * safety_monitor_node.cpp - Monitor overall safety status
 *
 * Aggregates collision warnings and system health status.
 * Provides high-level safety state for user interface.
 */

#include <rclcpp/rclcpp.hpp>
#include <safe_teleop_core/msg/collision_warning.hpp>
#include <std_msgs/msg/string.hpp>

namespace safe_teleop {

class SafetyMonitorNode : public rclcpp::Node {
public:
    SafetyMonitorNode() : Node("safety_monitor_node") {
        // Subscribe to collision warnings
        collision_sub_ = this->create_subscription<safe_teleop_core::msg::CollisionWarning>(
            "/safe_teleop/collision_warning",
            10,
            std::bind(&SafetyMonitorNode::collision_callback, this, std::placeholders::_1)
        );

        // Publish safety status
        status_pub_ = this->create_publisher<std_msgs::msg::String>(
            "/safe_teleop/safety_status",
            10
        );

        // Status timer
        status_timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&SafetyMonitorNode::status_callback, this)
        );

        RCLCPP_INFO(this->get_logger(), "SafetyMonitor initialized");
    }

private:
    void collision_callback(const safe_teleop_core::msg::CollisionWarning::SharedPtr msg) {
        last_warning_ = msg;
        last_warning_time_ = this->now();
    }

    void status_callback() {
        std_msgs::msg::String status_msg;

        if (!last_warning_) {
            status_msg.data = "NO_DATA";
        } else {
            auto elapsed = (this->now() - last_warning_time_).seconds();
            if (elapsed > 2.0) {
                status_msg.data = "STALE";
            } else {
                switch (last_warning_->severity) {
                    case safe_teleop_core::msg::CollisionWarning::NONE:
                        status_msg.data = "SAFE";
                        break;
                    case safe_teleop_core::msg::CollisionWarning::LOW:
                        status_msg.data = "CAUTION";
                        break;
                    case safe_teleop_core::msg::CollisionWarning::MEDIUM:
                        status_msg.data = "WARNING";
                        break;
                    case safe_teleop_core::msg::CollisionWarning::HIGH:
                        status_msg.data = "DANGER";
                        break;
                    case safe_teleop_core::msg::CollisionWarning::CRITICAL:
                        status_msg.data = "CRITICAL";
                        break;
                    default:
                        status_msg.data = "UNKNOWN";
                }
            }
        }

        status_pub_->publish(status_msg);
    }

    rclcpp::Subscription<safe_teleop_core::msg::CollisionWarning>::SharedPtr collision_sub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr status_pub_;
    rclcpp::TimerBase::SharedPtr status_timer_;

    safe_teleop_core::msg::CollisionWarning::SharedPtr last_warning_;
    rclcpp::Time last_warning_time_;
};

}  // namespace safe_teleop

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<safe_teleop::SafetyMonitorNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
