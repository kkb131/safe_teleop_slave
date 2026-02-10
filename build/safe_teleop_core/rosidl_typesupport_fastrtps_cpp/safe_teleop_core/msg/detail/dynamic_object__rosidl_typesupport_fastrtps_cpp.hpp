// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "safe_teleop_core/msg/detail/dynamic_object__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize(
  const safe_teleop_core::msg::DynamicObject & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  safe_teleop_core::msg::DynamicObject & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size(
  const safe_teleop_core::msg::DynamicObject & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_DynamicObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize_key(
  const safe_teleop_core::msg::DynamicObject & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size_key(
  const safe_teleop_core::msg::DynamicObject & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_key_DynamicObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace safe_teleop_core

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, msg, DynamicObject)();

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
