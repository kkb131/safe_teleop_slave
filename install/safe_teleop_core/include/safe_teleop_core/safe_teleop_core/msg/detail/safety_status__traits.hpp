// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_status.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/msg/detail/safety_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace safe_teleop_core
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: safety_mode
  {
    out << "safety_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_mode, out);
    out << ", ";
  }

  // member: master_connected
  {
    out << "master_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.master_connected, out);
    out << ", ";
  }

  // member: esdf_available
  {
    out << "esdf_available: ";
    rosidl_generator_traits::value_to_yaml(msg.esdf_available, out);
    out << ", ";
  }

  // member: pointcloud_available
  {
    out << "pointcloud_available: ";
    rosidl_generator_traits::value_to_yaml(msg.pointcloud_available, out);
    out << ", ";
  }

  // member: emergency_stop_active
  {
    out << "emergency_stop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_active, out);
    out << ", ";
  }

  // member: esdf_age_sec
  {
    out << "esdf_age_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.esdf_age_sec, out);
    out << ", ";
  }

  // member: pointcloud_age_sec
  {
    out << "pointcloud_age_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.pointcloud_age_sec, out);
    out << ", ";
  }

  // member: last_collision_check_ms
  {
    out << "last_collision_check_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.last_collision_check_ms, out);
    out << ", ";
  }

  // member: active_collision_severity
  {
    out << "active_collision_severity: ";
    rosidl_generator_traits::value_to_yaml(msg.active_collision_severity, out);
    out << ", ";
  }

  // member: min_distance_to_obstacle
  {
    out << "min_distance_to_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.min_distance_to_obstacle, out);
    out << ", ";
  }

  // member: avg_collision_check_latency_ms
  {
    out << "avg_collision_check_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_collision_check_latency_ms, out);
    out << ", ";
  }

  // member: collision_checks_per_sec
  {
    out << "collision_checks_per_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_checks_per_sec, out);
    out << ", ";
  }

  // member: velocity_limit_active
  {
    out << "velocity_limit_active: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit_active, out);
    out << ", ";
  }

  // member: max_safe_velocity
  {
    out << "max_safe_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safe_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: safety_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_mode, out);
    out << "\n";
  }

  // member: master_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.master_connected, out);
    out << "\n";
  }

  // member: esdf_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esdf_available: ";
    rosidl_generator_traits::value_to_yaml(msg.esdf_available, out);
    out << "\n";
  }

  // member: pointcloud_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointcloud_available: ";
    rosidl_generator_traits::value_to_yaml(msg.pointcloud_available, out);
    out << "\n";
  }

  // member: emergency_stop_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_active, out);
    out << "\n";
  }

  // member: esdf_age_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esdf_age_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.esdf_age_sec, out);
    out << "\n";
  }

  // member: pointcloud_age_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointcloud_age_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.pointcloud_age_sec, out);
    out << "\n";
  }

  // member: last_collision_check_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_collision_check_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.last_collision_check_ms, out);
    out << "\n";
  }

  // member: active_collision_severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_collision_severity: ";
    rosidl_generator_traits::value_to_yaml(msg.active_collision_severity, out);
    out << "\n";
  }

  // member: min_distance_to_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_distance_to_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.min_distance_to_obstacle, out);
    out << "\n";
  }

  // member: avg_collision_check_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_collision_check_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_collision_check_latency_ms, out);
    out << "\n";
  }

  // member: collision_checks_per_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_checks_per_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_checks_per_sec, out);
    out << "\n";
  }

  // member: velocity_limit_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_limit_active: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit_active, out);
    out << "\n";
  }

  // member: max_safe_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_safe_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safe_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace safe_teleop_core

namespace rosidl_generator_traits
{

[[deprecated("use safe_teleop_core::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const safe_teleop_core::msg::SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::msg::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::msg::SafetyStatus & msg)
{
  return safe_teleop_core::msg::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::msg::SafetyStatus>()
{
  return "safe_teleop_core::msg::SafetyStatus";
}

template<>
inline const char * name<safe_teleop_core::msg::SafetyStatus>()
{
  return "safe_teleop_core/msg/SafetyStatus";
}

template<>
struct has_fixed_size<safe_teleop_core::msg::SafetyStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<safe_teleop_core::msg::SafetyStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<safe_teleop_core::msg::SafetyStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_
