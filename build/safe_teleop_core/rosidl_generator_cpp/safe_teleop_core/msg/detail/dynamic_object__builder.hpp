// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/dynamic_object.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/msg/detail/dynamic_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace msg
{

namespace builder
{

class Init_DynamicObject_last_updated
{
public:
  explicit Init_DynamicObject_last_updated(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::msg::DynamicObject last_updated(::safe_teleop_core::msg::DynamicObject::_last_updated_type arg)
  {
    msg_.last_updated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_first_detected
{
public:
  explicit Init_DynamicObject_first_detected(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_last_updated first_detected(::safe_teleop_core::msg::DynamicObject::_first_detected_type arg)
  {
    msg_.first_detected = std::move(arg);
    return Init_DynamicObject_last_updated(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_frames_tracked
{
public:
  explicit Init_DynamicObject_frames_tracked(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_first_detected frames_tracked(::safe_teleop_core::msg::DynamicObject::_frames_tracked_type arg)
  {
    msg_.frames_tracked = std::move(arg);
    return Init_DynamicObject_first_detected(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_tracking_confidence
{
public:
  explicit Init_DynamicObject_tracking_confidence(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_frames_tracked tracking_confidence(::safe_teleop_core::msg::DynamicObject::_tracking_confidence_type arg)
  {
    msg_.tracking_confidence = std::move(arg);
    return Init_DynamicObject_frames_tracked(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_object_class
{
public:
  explicit Init_DynamicObject_object_class(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_tracking_confidence object_class(::safe_teleop_core::msg::DynamicObject::_object_class_type arg)
  {
    msg_.object_class = std::move(arg);
    return Init_DynamicObject_tracking_confidence(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_bounding_box
{
public:
  explicit Init_DynamicObject_bounding_box(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_object_class bounding_box(::safe_teleop_core::msg::DynamicObject::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_DynamicObject_object_class(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_velocity
{
public:
  explicit Init_DynamicObject_velocity(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_bounding_box velocity(::safe_teleop_core::msg::DynamicObject::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_DynamicObject_bounding_box(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_current_pose
{
public:
  explicit Init_DynamicObject_current_pose(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_velocity current_pose(::safe_teleop_core::msg::DynamicObject::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_DynamicObject_velocity(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_tracking_id
{
public:
  explicit Init_DynamicObject_tracking_id(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_current_pose tracking_id(::safe_teleop_core::msg::DynamicObject::_tracking_id_type arg)
  {
    msg_.tracking_id = std::move(arg);
    return Init_DynamicObject_current_pose(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_object_id
{
public:
  explicit Init_DynamicObject_object_id(::safe_teleop_core::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_tracking_id object_id(::safe_teleop_core::msg::DynamicObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_DynamicObject_tracking_id(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

class Init_DynamicObject_header
{
public:
  Init_DynamicObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObject_object_id header(::safe_teleop_core::msg::DynamicObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynamicObject_object_id(msg_);
  }

private:
  ::safe_teleop_core::msg::DynamicObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::msg::DynamicObject>()
{
  return safe_teleop_core::msg::builder::Init_DynamicObject_header();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_
