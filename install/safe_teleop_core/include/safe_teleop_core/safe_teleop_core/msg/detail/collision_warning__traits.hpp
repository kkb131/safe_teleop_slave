// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/collision_warning.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__TRAITS_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/msg/detail/collision_warning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace safe_teleop_core
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionWarning & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: severity
  {
    out << "severity: ";
    rosidl_generator_traits::value_to_yaml(msg.severity, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: distance_to_collision
  {
    out << "distance_to_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_collision, out);
    out << ", ";
  }

  // member: time_to_collision
  {
    out << "time_to_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_collision, out);
    out << ", ";
  }

  // member: emergency_stop_required
  {
    out << "emergency_stop_required: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_required, out);
    out << ", ";
  }

  // member: velocity_reduction_required
  {
    out << "velocity_reduction_required: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_reduction_required, out);
    out << ", ";
  }

  // member: max_safe_velocity
  {
    out << "max_safe_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safe_velocity, out);
    out << ", ";
  }

  // member: warning_source
  {
    out << "warning_source: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionWarning & msg,
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

  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity: ";
    rosidl_generator_traits::value_to_yaml(msg.severity, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: distance_to_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_collision, out);
    out << "\n";
  }

  // member: time_to_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_collision, out);
    out << "\n";
  }

  // member: emergency_stop_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_required: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_required, out);
    out << "\n";
  }

  // member: velocity_reduction_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_reduction_required: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_reduction_required, out);
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

  // member: warning_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_source: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionWarning & msg, bool use_flow_style = false)
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
  const safe_teleop_core::msg::CollisionWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::msg::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::msg::CollisionWarning & msg)
{
  return safe_teleop_core::msg::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::msg::CollisionWarning>()
{
  return "safe_teleop_core::msg::CollisionWarning";
}

template<>
inline const char * name<safe_teleop_core::msg::CollisionWarning>()
{
  return "safe_teleop_core/msg/CollisionWarning";
}

template<>
struct has_fixed_size<safe_teleop_core::msg::CollisionWarning>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::msg::CollisionWarning>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::msg::CollisionWarning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__TRAITS_HPP_
