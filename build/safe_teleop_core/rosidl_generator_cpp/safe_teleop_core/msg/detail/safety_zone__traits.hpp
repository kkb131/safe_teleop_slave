// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:msg/SafetyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_zone.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__TRAITS_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/msg/detail/safety_zone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace safe_teleop_core
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyZone & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: zone_id
  {
    out << "zone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_id, out);
    out << ", ";
  }

  // member: zone_name
  {
    out << "zone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_name, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: safety_margin
  {
    out << "safety_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin, out);
    out << ", ";
  }

  // member: is_active
  {
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: is_dynamic
  {
    out << "is_dynamic: ";
    rosidl_generator_traits::value_to_yaml(msg.is_dynamic, out);
    out << ", ";
  }

  // member: velocity_magnitude
  {
    out << "velocity_magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_magnitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyZone & msg,
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

  // member: zone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_id, out);
    out << "\n";
  }

  // member: zone_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_name, out);
    out << "\n";
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: safety_margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin, out);
    out << "\n";
  }

  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: is_dynamic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_dynamic: ";
    rosidl_generator_traits::value_to_yaml(msg.is_dynamic, out);
    out << "\n";
  }

  // member: velocity_magnitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_magnitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyZone & msg, bool use_flow_style = false)
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
  const safe_teleop_core::msg::SafetyZone & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::msg::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::msg::SafetyZone & msg)
{
  return safe_teleop_core::msg::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::msg::SafetyZone>()
{
  return "safe_teleop_core::msg::SafetyZone";
}

template<>
inline const char * name<safe_teleop_core::msg::SafetyZone>()
{
  return "safe_teleop_core/msg/SafetyZone";
}

template<>
struct has_fixed_size<safe_teleop_core::msg::SafetyZone>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::msg::SafetyZone>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::msg::SafetyZone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__TRAITS_HPP_
