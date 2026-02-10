// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/object_status.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/msg/detail/object_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace msg
{

namespace builder
{

class Init_ObjectStatus_detection_confidence
{
public:
  explicit Init_ObjectStatus_detection_confidence(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::msg::ObjectStatus detection_confidence(::safe_teleop_core::msg::ObjectStatus::_detection_confidence_type arg)
  {
    msg_.detection_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_is_activated
{
public:
  explicit Init_ObjectStatus_is_activated(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_detection_confidence is_activated(::safe_teleop_core::msg::ObjectStatus::_is_activated_type arg)
  {
    msg_.is_activated = std::move(arg);
    return Init_ObjectStatus_detection_confidence(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_motion_state
{
public:
  explicit Init_ObjectStatus_motion_state(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_is_activated motion_state(::safe_teleop_core::msg::ObjectStatus::_motion_state_type arg)
  {
    msg_.motion_state = std::move(arg);
    return Init_ObjectStatus_is_activated(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_bounding_box
{
public:
  explicit Init_ObjectStatus_bounding_box(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_motion_state bounding_box(::safe_teleop_core::msg::ObjectStatus::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_ObjectStatus_motion_state(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_pose
{
public:
  explicit Init_ObjectStatus_pose(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_bounding_box pose(::safe_teleop_core::msg::ObjectStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ObjectStatus_bounding_box(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_object_type
{
public:
  explicit Init_ObjectStatus_object_type(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_pose object_type(::safe_teleop_core::msg::ObjectStatus::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_ObjectStatus_pose(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_object_id
{
public:
  explicit Init_ObjectStatus_object_id(::safe_teleop_core::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_object_type object_id(::safe_teleop_core::msg::ObjectStatus::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ObjectStatus_object_type(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_header
{
public:
  Init_ObjectStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectStatus_object_id header(::safe_teleop_core::msg::ObjectStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectStatus_object_id(msg_);
  }

private:
  ::safe_teleop_core::msg::ObjectStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::msg::ObjectStatus>()
{
  return safe_teleop_core::msg::builder::Init_ObjectStatus_header();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_
