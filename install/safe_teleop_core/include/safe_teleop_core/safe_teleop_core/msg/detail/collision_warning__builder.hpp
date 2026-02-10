// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/collision_warning.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__BUILDER_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/msg/detail/collision_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace msg
{

namespace builder
{

class Init_CollisionWarning_warning_source
{
public:
  explicit Init_CollisionWarning_warning_source(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::msg::CollisionWarning warning_source(::safe_teleop_core::msg::CollisionWarning::_warning_source_type arg)
  {
    msg_.warning_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_max_safe_velocity
{
public:
  explicit Init_CollisionWarning_max_safe_velocity(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_warning_source max_safe_velocity(::safe_teleop_core::msg::CollisionWarning::_max_safe_velocity_type arg)
  {
    msg_.max_safe_velocity = std::move(arg);
    return Init_CollisionWarning_warning_source(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_velocity_reduction_required
{
public:
  explicit Init_CollisionWarning_velocity_reduction_required(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_max_safe_velocity velocity_reduction_required(::safe_teleop_core::msg::CollisionWarning::_velocity_reduction_required_type arg)
  {
    msg_.velocity_reduction_required = std::move(arg);
    return Init_CollisionWarning_max_safe_velocity(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_emergency_stop_required
{
public:
  explicit Init_CollisionWarning_emergency_stop_required(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_velocity_reduction_required emergency_stop_required(::safe_teleop_core::msg::CollisionWarning::_emergency_stop_required_type arg)
  {
    msg_.emergency_stop_required = std::move(arg);
    return Init_CollisionWarning_velocity_reduction_required(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_time_to_collision
{
public:
  explicit Init_CollisionWarning_time_to_collision(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_emergency_stop_required time_to_collision(::safe_teleop_core::msg::CollisionWarning::_time_to_collision_type arg)
  {
    msg_.time_to_collision = std::move(arg);
    return Init_CollisionWarning_emergency_stop_required(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_distance_to_collision
{
public:
  explicit Init_CollisionWarning_distance_to_collision(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_time_to_collision distance_to_collision(::safe_teleop_core::msg::CollisionWarning::_distance_to_collision_type arg)
  {
    msg_.distance_to_collision = std::move(arg);
    return Init_CollisionWarning_time_to_collision(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_object_id
{
public:
  explicit Init_CollisionWarning_object_id(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_distance_to_collision object_id(::safe_teleop_core::msg::CollisionWarning::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_CollisionWarning_distance_to_collision(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_severity
{
public:
  explicit Init_CollisionWarning_severity(::safe_teleop_core::msg::CollisionWarning & msg)
  : msg_(msg)
  {}
  Init_CollisionWarning_object_id severity(::safe_teleop_core::msg::CollisionWarning::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_CollisionWarning_object_id(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

class Init_CollisionWarning_header
{
public:
  Init_CollisionWarning_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionWarning_severity header(::safe_teleop_core::msg::CollisionWarning::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CollisionWarning_severity(msg_);
  }

private:
  ::safe_teleop_core::msg::CollisionWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::msg::CollisionWarning>()
{
  return safe_teleop_core::msg::builder::Init_CollisionWarning_header();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__BUILDER_HPP_
