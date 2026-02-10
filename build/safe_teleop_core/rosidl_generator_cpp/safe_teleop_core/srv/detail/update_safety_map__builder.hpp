// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/update_safety_map.hpp"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__BUILDER_HPP_
#define SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "safe_teleop_core/srv/detail/update_safety_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace safe_teleop_core
{

namespace srv
{

namespace builder
{

class Init_UpdateSafetyMap_Request_specific_zones
{
public:
  explicit Init_UpdateSafetyMap_Request_specific_zones(::safe_teleop_core::srv::UpdateSafetyMap_Request & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::srv::UpdateSafetyMap_Request specific_zones(::safe_teleop_core::srv::UpdateSafetyMap_Request::_specific_zones_type arg)
  {
    msg_.specific_zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Request msg_;
};

class Init_UpdateSafetyMap_Request_force_full_update
{
public:
  Init_UpdateSafetyMap_Request_force_full_update()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateSafetyMap_Request_specific_zones force_full_update(::safe_teleop_core::srv::UpdateSafetyMap_Request::_force_full_update_type arg)
  {
    msg_.force_full_update = std::move(arg);
    return Init_UpdateSafetyMap_Request_specific_zones(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::srv::UpdateSafetyMap_Request>()
{
  return safe_teleop_core::srv::builder::Init_UpdateSafetyMap_Request_force_full_update();
}

}  // namespace safe_teleop_core


namespace safe_teleop_core
{

namespace srv
{

namespace builder
{

class Init_UpdateSafetyMap_Response_map_timestamp
{
public:
  explicit Init_UpdateSafetyMap_Response_map_timestamp(::safe_teleop_core::srv::UpdateSafetyMap_Response & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::srv::UpdateSafetyMap_Response map_timestamp(::safe_teleop_core::srv::UpdateSafetyMap_Response::_map_timestamp_type arg)
  {
    msg_.map_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Response msg_;
};

class Init_UpdateSafetyMap_Response_update_duration
{
public:
  explicit Init_UpdateSafetyMap_Response_update_duration(::safe_teleop_core::srv::UpdateSafetyMap_Response & msg)
  : msg_(msg)
  {}
  Init_UpdateSafetyMap_Response_map_timestamp update_duration(::safe_teleop_core::srv::UpdateSafetyMap_Response::_update_duration_type arg)
  {
    msg_.update_duration = std::move(arg);
    return Init_UpdateSafetyMap_Response_map_timestamp(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Response msg_;
};

class Init_UpdateSafetyMap_Response_zones_updated
{
public:
  explicit Init_UpdateSafetyMap_Response_zones_updated(::safe_teleop_core::srv::UpdateSafetyMap_Response & msg)
  : msg_(msg)
  {}
  Init_UpdateSafetyMap_Response_update_duration zones_updated(::safe_teleop_core::srv::UpdateSafetyMap_Response::_zones_updated_type arg)
  {
    msg_.zones_updated = std::move(arg);
    return Init_UpdateSafetyMap_Response_update_duration(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Response msg_;
};

class Init_UpdateSafetyMap_Response_message
{
public:
  explicit Init_UpdateSafetyMap_Response_message(::safe_teleop_core::srv::UpdateSafetyMap_Response & msg)
  : msg_(msg)
  {}
  Init_UpdateSafetyMap_Response_zones_updated message(::safe_teleop_core::srv::UpdateSafetyMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_UpdateSafetyMap_Response_zones_updated(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Response msg_;
};

class Init_UpdateSafetyMap_Response_success
{
public:
  Init_UpdateSafetyMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateSafetyMap_Response_message success(::safe_teleop_core::srv::UpdateSafetyMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_UpdateSafetyMap_Response_message(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::srv::UpdateSafetyMap_Response>()
{
  return safe_teleop_core::srv::builder::Init_UpdateSafetyMap_Response_success();
}

}  // namespace safe_teleop_core


namespace safe_teleop_core
{

namespace srv
{

namespace builder
{

class Init_UpdateSafetyMap_Event_response
{
public:
  explicit Init_UpdateSafetyMap_Event_response(::safe_teleop_core::srv::UpdateSafetyMap_Event & msg)
  : msg_(msg)
  {}
  ::safe_teleop_core::srv::UpdateSafetyMap_Event response(::safe_teleop_core::srv::UpdateSafetyMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Event msg_;
};

class Init_UpdateSafetyMap_Event_request
{
public:
  explicit Init_UpdateSafetyMap_Event_request(::safe_teleop_core::srv::UpdateSafetyMap_Event & msg)
  : msg_(msg)
  {}
  Init_UpdateSafetyMap_Event_response request(::safe_teleop_core::srv::UpdateSafetyMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_UpdateSafetyMap_Event_response(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Event msg_;
};

class Init_UpdateSafetyMap_Event_info
{
public:
  Init_UpdateSafetyMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateSafetyMap_Event_request info(::safe_teleop_core::srv::UpdateSafetyMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_UpdateSafetyMap_Event_request(msg_);
  }

private:
  ::safe_teleop_core::srv::UpdateSafetyMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::safe_teleop_core::srv::UpdateSafetyMap_Event>()
{
  return safe_teleop_core::srv::builder::Init_UpdateSafetyMap_Event_info();
}

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__BUILDER_HPP_
