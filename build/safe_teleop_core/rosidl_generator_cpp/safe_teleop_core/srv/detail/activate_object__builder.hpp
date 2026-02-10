// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:srv/ActivateObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/activate_object.hpp"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__BUILDER_HPP_
#define SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/srv/detail/activate_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace srv
{

namespace builder
{

class Init_ActivateObject_Request_safety_margin
{
public:
  explicit Init_ActivateObject_Request_safety_margin(::safe_teleop_core::srv::ActivateObject_Request & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::srv::ActivateObject_Request safety_margin(::safe_teleop_core::srv::ActivateObject_Request::_safety_margin_type arg)
  {
    msg_.safety_margin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Request msg_;
};

class Init_ActivateObject_Request_activate
{
public:
  explicit Init_ActivateObject_Request_activate(::safe_teleop_core::srv::ActivateObject_Request & msg)
  : msg_(msg)
  {}
  Init_ActivateObject_Request_safety_margin activate(::safe_teleop_core::srv::ActivateObject_Request::_activate_type arg)
  {
    msg_.activate = std::move(arg);
    return Init_ActivateObject_Request_safety_margin(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Request msg_;
};

class Init_ActivateObject_Request_object_id
{
public:
  Init_ActivateObject_Request_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActivateObject_Request_activate object_id(::safe_teleop_core::srv::ActivateObject_Request::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ActivateObject_Request_activate(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::srv::ActivateObject_Request>()
{
  return safe_teleop_core::srv::builder::Init_ActivateObject_Request_object_id();
}

}  // namespace safe_teleop_core


namespace safe_teleop_core
{

namespace srv
{

namespace builder
{

class Init_ActivateObject_Response_updated_status
{
public:
  explicit Init_ActivateObject_Response_updated_status(::safe_teleop_core::srv::ActivateObject_Response & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::srv::ActivateObject_Response updated_status(::safe_teleop_core::srv::ActivateObject_Response::_updated_status_type arg)
  {
    msg_.updated_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Response msg_;
};

class Init_ActivateObject_Response_message
{
public:
  explicit Init_ActivateObject_Response_message(::safe_teleop_core::srv::ActivateObject_Response & msg)
  : msg_(msg)
  {}
  Init_ActivateObject_Response_updated_status message(::safe_teleop_core::srv::ActivateObject_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ActivateObject_Response_updated_status(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Response msg_;
};

class Init_ActivateObject_Response_success
{
public:
  Init_ActivateObject_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActivateObject_Response_message success(::safe_teleop_core::srv::ActivateObject_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ActivateObject_Response_message(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::srv::ActivateObject_Response>()
{
  return safe_teleop_core::srv::builder::Init_ActivateObject_Response_success();
}

}  // namespace safe_teleop_core


namespace safe_teleop_core
{

namespace srv
{

namespace builder
{

class Init_ActivateObject_Event_response
{
public:
  explicit Init_ActivateObject_Event_response(::safe_teleop_core::srv::ActivateObject_Event & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::srv::ActivateObject_Event response(::safe_teleop_core::srv::ActivateObject_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Event msg_;
};

class Init_ActivateObject_Event_request
{
public:
  explicit Init_ActivateObject_Event_request(::safe_teleop_core::srv::ActivateObject_Event & msg)
  : msg_(msg)
  {}
  Init_ActivateObject_Event_response request(::safe_teleop_core::srv::ActivateObject_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActivateObject_Event_response(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Event msg_;
};

class Init_ActivateObject_Event_info
{
public:
  Init_ActivateObject_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActivateObject_Event_request info(::safe_teleop_core::srv::ActivateObject_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ActivateObject_Event_request(msg_);
  }

private:
  ::safe_teleop_core::srv::ActivateObject_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::srv::ActivateObject_Event>()
{
  return safe_teleop_core::srv::builder::Init_ActivateObject_Event_info();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__BUILDER_HPP_
