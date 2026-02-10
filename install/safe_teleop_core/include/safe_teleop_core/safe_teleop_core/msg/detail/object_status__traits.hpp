// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/object_status.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__TRAITS_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/msg/detail/object_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'bounding_box'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace safe_teleop_core
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectStatus & msg,
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

  // member: object_type
  {
    out << "object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.object_type, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: bounding_box
  {
    out << "bounding_box: ";
    to_flow_style_yaml(msg.bounding_box, out);
    out << ", ";
  }

  // member: motion_state
  {
    out << "motion_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_state, out);
    out << ", ";
  }

  // member: is_activated
  {
    out << "is_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated, out);
    out << ", ";
  }

  // member: detection_confidence
  {
    out << "detection_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectStatus & msg,
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

  // member: object_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.object_type, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_block_style_yaml(msg.bounding_box, out, indentation + 2);
  }

  // member: motion_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_state, out);
    out << "\n";
  }

  // member: is_activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated, out);
    out << "\n";
  }

  // member: detection_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectStatus & msg, bool use_flow_style = false)
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
  const safe_teleop_core::msg::ObjectStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::msg::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::msg::ObjectStatus & msg)
{
  return safe_teleop_core::msg::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::msg::ObjectStatus>()
{
  return "safe_teleop_core::msg::ObjectStatus";
}

template<>
inline const char * name<safe_teleop_core::msg::ObjectStatus>()
{
  return "safe_teleop_core/msg/ObjectStatus";
}

template<>
struct has_fixed_size<safe_teleop_core::msg::ObjectStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::msg::ObjectStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::msg::ObjectStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__TRAITS_HPP_
