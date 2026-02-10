// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/dynamic_object.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/msg/detail/dynamic_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'bounding_box'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'first_detected'
// Member 'last_updated'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace safe_teleop_core
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: tracking_id
  {
    out << "tracking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_id, out);
    out << ", ";
  }

  // member: current_pose
  {
    out << "current_pose: ";
    to_flow_style_yaml(msg.current_pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: bounding_box
  {
    out << "bounding_box: ";
    to_flow_style_yaml(msg.bounding_box, out);
    out << ", ";
  }

  // member: object_class
  {
    out << "object_class: ";
    rosidl_generator_traits::value_to_yaml(msg.object_class, out);
    out << ", ";
  }

  // member: tracking_confidence
  {
    out << "tracking_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_confidence, out);
    out << ", ";
  }

  // member: frames_tracked
  {
    out << "frames_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.frames_tracked, out);
    out << ", ";
  }

  // member: first_detected
  {
    out << "first_detected: ";
    to_flow_style_yaml(msg.first_detected, out);
    out << ", ";
  }

  // member: last_updated
  {
    out << "last_updated: ";
    to_flow_style_yaml(msg.last_updated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicObject & msg,
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

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: tracking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_id, out);
    out << "\n";
  }

  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pose:\n";
    to_block_style_yaml(msg.current_pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_block_style_yaml(msg.bounding_box, out, indentation + 2);
  }

  // member: object_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_class: ";
    rosidl_generator_traits::value_to_yaml(msg.object_class, out);
    out << "\n";
  }

  // member: tracking_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_confidence, out);
    out << "\n";
  }

  // member: frames_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frames_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.frames_tracked, out);
    out << "\n";
  }

  // member: first_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_detected:\n";
    to_block_style_yaml(msg.first_detected, out, indentation + 2);
  }

  // member: last_updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_updated:\n";
    to_block_style_yaml(msg.last_updated, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicObject & msg, bool use_flow_style = false)
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
  const safe_teleop_core::msg::DynamicObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::msg::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::msg::DynamicObject & msg)
{
  return safe_teleop_core::msg::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::msg::DynamicObject>()
{
  return "safe_teleop_core::msg::DynamicObject";
}

template<>
inline const char * name<safe_teleop_core::msg::DynamicObject>()
{
  return "safe_teleop_core/msg/DynamicObject";
}

template<>
struct has_fixed_size<safe_teleop_core::msg::DynamicObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::msg::DynamicObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::msg::DynamicObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_
