// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_status.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/msg/detail/safety_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace msg
{

namespace builder
{

class Init_SafetyStatus_max_safe_velocity
{
public:
  explicit Init_SafetyStatus_max_safe_velocity(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::msg::SafetyStatus max_safe_velocity(::safe_teleop_core::msg::SafetyStatus::_max_safe_velocity_type arg)
  {
    msg_.max_safe_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_velocity_limit_active
{
public:
  explicit Init_SafetyStatus_velocity_limit_active(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_max_safe_velocity velocity_limit_active(::safe_teleop_core::msg::SafetyStatus::_velocity_limit_active_type arg)
  {
    msg_.velocity_limit_active = std::move(arg);
    return Init_SafetyStatus_max_safe_velocity(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_collision_checks_per_sec
{
public:
  explicit Init_SafetyStatus_collision_checks_per_sec(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_velocity_limit_active collision_checks_per_sec(::safe_teleop_core::msg::SafetyStatus::_collision_checks_per_sec_type arg)
  {
    msg_.collision_checks_per_sec = std::move(arg);
    return Init_SafetyStatus_velocity_limit_active(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_avg_collision_check_latency_ms
{
public:
  explicit Init_SafetyStatus_avg_collision_check_latency_ms(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_collision_checks_per_sec avg_collision_check_latency_ms(::safe_teleop_core::msg::SafetyStatus::_avg_collision_check_latency_ms_type arg)
  {
    msg_.avg_collision_check_latency_ms = std::move(arg);
    return Init_SafetyStatus_collision_checks_per_sec(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_min_distance_to_obstacle
{
public:
  explicit Init_SafetyStatus_min_distance_to_obstacle(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_avg_collision_check_latency_ms min_distance_to_obstacle(::safe_teleop_core::msg::SafetyStatus::_min_distance_to_obstacle_type arg)
  {
    msg_.min_distance_to_obstacle = std::move(arg);
    return Init_SafetyStatus_avg_collision_check_latency_ms(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_active_collision_severity
{
public:
  explicit Init_SafetyStatus_active_collision_severity(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_min_distance_to_obstacle active_collision_severity(::safe_teleop_core::msg::SafetyStatus::_active_collision_severity_type arg)
  {
    msg_.active_collision_severity = std::move(arg);
    return Init_SafetyStatus_min_distance_to_obstacle(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_last_collision_check_ms
{
public:
  explicit Init_SafetyStatus_last_collision_check_ms(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_active_collision_severity last_collision_check_ms(::safe_teleop_core::msg::SafetyStatus::_last_collision_check_ms_type arg)
  {
    msg_.last_collision_check_ms = std::move(arg);
    return Init_SafetyStatus_active_collision_severity(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_pointcloud_age_sec
{
public:
  explicit Init_SafetyStatus_pointcloud_age_sec(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_last_collision_check_ms pointcloud_age_sec(::safe_teleop_core::msg::SafetyStatus::_pointcloud_age_sec_type arg)
  {
    msg_.pointcloud_age_sec = std::move(arg);
    return Init_SafetyStatus_last_collision_check_ms(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_esdf_age_sec
{
public:
  explicit Init_SafetyStatus_esdf_age_sec(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_pointcloud_age_sec esdf_age_sec(::safe_teleop_core::msg::SafetyStatus::_esdf_age_sec_type arg)
  {
    msg_.esdf_age_sec = std::move(arg);
    return Init_SafetyStatus_pointcloud_age_sec(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_emergency_stop_active
{
public:
  explicit Init_SafetyStatus_emergency_stop_active(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_esdf_age_sec emergency_stop_active(::safe_teleop_core::msg::SafetyStatus::_emergency_stop_active_type arg)
  {
    msg_.emergency_stop_active = std::move(arg);
    return Init_SafetyStatus_esdf_age_sec(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_pointcloud_available
{
public:
  explicit Init_SafetyStatus_pointcloud_available(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_emergency_stop_active pointcloud_available(::safe_teleop_core::msg::SafetyStatus::_pointcloud_available_type arg)
  {
    msg_.pointcloud_available = std::move(arg);
    return Init_SafetyStatus_emergency_stop_active(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_esdf_available
{
public:
  explicit Init_SafetyStatus_esdf_available(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_pointcloud_available esdf_available(::safe_teleop_core::msg::SafetyStatus::_esdf_available_type arg)
  {
    msg_.esdf_available = std::move(arg);
    return Init_SafetyStatus_pointcloud_available(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_master_connected
{
public:
  explicit Init_SafetyStatus_master_connected(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_esdf_available master_connected(::safe_teleop_core::msg::SafetyStatus::_master_connected_type arg)
  {
    msg_.master_connected = std::move(arg);
    return Init_SafetyStatus_esdf_available(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_mode
{
public:
  explicit Init_SafetyStatus_safety_mode(::safe_teleop_core::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_master_connected safety_mode(::safe_teleop_core::msg::SafetyStatus::_safety_mode_type arg)
  {
    msg_.safety_mode = std::move(arg);
    return Init_SafetyStatus_master_connected(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_header
{
public:
  Init_SafetyStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyStatus_safety_mode header(::safe_teleop_core::msg::SafetyStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SafetyStatus_safety_mode(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::msg::SafetyStatus>()
{
  return safe_teleop_core::msg::builder::Init_SafetyStatus_header();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_
