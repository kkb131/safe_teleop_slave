// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice
#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "safe_teleop_core/msg/detail/object_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
bool cdr_serialize_safe_teleop_core__msg__ObjectStatus(
  const safe_teleop_core__msg__ObjectStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
bool cdr_deserialize_safe_teleop_core__msg__ObjectStatus(
  eprosima::fastcdr::Cdr &,
  safe_teleop_core__msg__ObjectStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t get_serialized_size_safe_teleop_core__msg__ObjectStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t max_serialized_size_safe_teleop_core__msg__ObjectStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
bool cdr_serialize_key_safe_teleop_core__msg__ObjectStatus(
  const safe_teleop_core__msg__ObjectStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t get_serialized_size_key_safe_teleop_core__msg__ObjectStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t max_serialized_size_key_safe_teleop_core__msg__ObjectStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, safe_teleop_core, msg, ObjectStatus)();

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
