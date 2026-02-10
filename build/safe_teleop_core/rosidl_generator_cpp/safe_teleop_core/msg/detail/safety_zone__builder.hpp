// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:msg/SafetyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_zone.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__BUILDER_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/msg/detail/safety_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace msg
{

namespace builder
{

class Init_SafetyZone_velocity_magnitude
{
public:
  explicit Init_SafetyZone_velocity_magnitude(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::msg::SafetyZone velocity_magnitude(::safe_teleop_core::msg::SafetyZone::_velocity_magnitude_type arg)
  {
    msg_.velocity_magnitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_is_dynamic
{
public:
  explicit Init_SafetyZone_is_dynamic(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_velocity_magnitude is_dynamic(::safe_teleop_core::msg::SafetyZone::_is_dynamic_type arg)
  {
    msg_.is_dynamic = std::move(arg);
    return Init_SafetyZone_velocity_magnitude(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_priority
{
public:
  explicit Init_SafetyZone_priority(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_is_dynamic priority(::safe_teleop_core::msg::SafetyZone::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_SafetyZone_is_dynamic(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_is_active
{
public:
  explicit Init_SafetyZone_is_active(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_priority is_active(::safe_teleop_core::msg::SafetyZone::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_SafetyZone_priority(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_safety_margin
{
public:
  explicit Init_SafetyZone_safety_margin(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_is_active safety_margin(::safe_teleop_core::msg::SafetyZone::_safety_margin_type arg)
  {
    msg_.safety_margin = std::move(arg);
    return Init_SafetyZone_is_active(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_size
{
public:
  explicit Init_SafetyZone_size(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_safety_margin size(::safe_teleop_core::msg::SafetyZone::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SafetyZone_safety_margin(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_center
{
public:
  explicit Init_SafetyZone_center(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_size center(::safe_teleop_core::msg::SafetyZone::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_SafetyZone_size(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_zone_name
{
public:
  explicit Init_SafetyZone_zone_name(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_center zone_name(::safe_teleop_core::msg::SafetyZone::_zone_name_type arg)
  {
    msg_.zone_name = std::move(arg);
    return Init_SafetyZone_center(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_zone_id
{
public:
  explicit Init_SafetyZone_zone_id(::safe_teleop_core::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  Init_SafetyZone_zone_name zone_id(::safe_teleop_core::msg::SafetyZone::_zone_id_type arg)
  {
    msg_.zone_id = std::move(arg);
    return Init_SafetyZone_zone_name(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

class Init_SafetyZone_header
{
public:
  Init_SafetyZone_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyZone_zone_id header(::safe_teleop_core::msg::SafetyZone::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SafetyZone_zone_id(msg_);
  }

private:
  ::safe_teleop_core::msg::SafetyZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::msg::SafetyZone>()
{
  return safe_teleop_core::msg::builder::Init_SafetyZone_header();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__BUILDER_HPP_
