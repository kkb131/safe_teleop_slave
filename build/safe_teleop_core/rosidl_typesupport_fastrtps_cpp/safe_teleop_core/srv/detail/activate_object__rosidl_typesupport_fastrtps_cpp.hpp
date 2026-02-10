// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from safe_teleop_core:srv/ActivateObject.idl
// generated code does not contain a copyright notice

#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "safe_teleop_core/srv/detail/activate_object__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace safe_teleop_core
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize(
  const safe_teleop_core::srv::ActivateObject_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  safe_teleop_core::srv::ActivateObject_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size(
  const safe_teleop_core::srv::ActivateObject_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_ActivateObject_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize_key(
  const safe_teleop_core::srv::ActivateObject_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size_key(
  const safe_teleop_core::srv::ActivateObject_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_key_ActivateObject_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace safe_teleop_core

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, ActivateObject_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "safe_teleop_core/srv/detail/activate_object__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace safe_teleop_core
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize(
  const safe_teleop_core::srv::ActivateObject_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  safe_teleop_core::srv::ActivateObject_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size(
  const safe_teleop_core::srv::ActivateObject_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_ActivateObject_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize_key(
  const safe_teleop_core::srv::ActivateObject_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size_key(
  const safe_teleop_core::srv::ActivateObject_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_key_ActivateObject_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace safe_teleop_core

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, ActivateObject_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "safe_teleop_core/srv/detail/activate_object__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace safe_teleop_core
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize(
  const safe_teleop_core::srv::ActivateObject_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  safe_teleop_core::srv::ActivateObject_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size(
  const safe_teleop_core::srv::ActivateObject_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_ActivateObject_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize_key(
  const safe_teleop_core::srv::ActivateObject_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size_key(
  const safe_teleop_core::srv::ActivateObject_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_key_ActivateObject_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace safe_teleop_core

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, ActivateObject_Event)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, ActivateObject)();

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
