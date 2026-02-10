// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/safety_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "safe_teleop_core/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "safe_teleop_core/msg/detail/safety_status__struct.h"
#include "safe_teleop_core/msg/detail/safety_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_safe_teleop_core
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SafetyStatus__ros_msg_type = safe_teleop_core__msg__SafetyStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
bool cdr_serialize_safe_teleop_core__msg__SafetyStatus(
  const safe_teleop_core__msg__SafetyStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: safety_mode
  {
    cdr << ros_message->safety_mode;
  }

  // Field name: master_connected
  {
    cdr << (ros_message->master_connected ? true : false);
  }

  // Field name: esdf_available
  {
    cdr << (ros_message->esdf_available ? true : false);
  }

  // Field name: pointcloud_available
  {
    cdr << (ros_message->pointcloud_available ? true : false);
  }

  // Field name: emergency_stop_active
  {
    cdr << (ros_message->emergency_stop_active ? true : false);
  }

  // Field name: esdf_age_sec
  {
    cdr << ros_message->esdf_age_sec;
  }

  // Field name: pointcloud_age_sec
  {
    cdr << ros_message->pointcloud_age_sec;
  }

  // Field name: last_collision_check_ms
  {
    cdr << ros_message->last_collision_check_ms;
  }

  // Field name: active_collision_severity
  {
    cdr << ros_message->active_collision_severity;
  }

  // Field name: min_distance_to_obstacle
  {
    cdr << ros_message->min_distance_to_obstacle;
  }

  // Field name: avg_collision_check_latency_ms
  {
    cdr << ros_message->avg_collision_check_latency_ms;
  }

  // Field name: collision_checks_per_sec
  {
    cdr << ros_message->collision_checks_per_sec;
  }

  // Field name: velocity_limit_active
  {
    cdr << (ros_message->velocity_limit_active ? true : false);
  }

  // Field name: max_safe_velocity
  {
    cdr << ros_message->max_safe_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
bool cdr_deserialize_safe_teleop_core__msg__SafetyStatus(
  eprosima::fastcdr::Cdr & cdr,
  safe_teleop_core__msg__SafetyStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: safety_mode
  {
    cdr >> ros_message->safety_mode;
  }

  // Field name: master_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->master_connected = tmp ? true : false;
  }

  // Field name: esdf_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->esdf_available = tmp ? true : false;
  }

  // Field name: pointcloud_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pointcloud_available = tmp ? true : false;
  }

  // Field name: emergency_stop_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop_active = tmp ? true : false;
  }

  // Field name: esdf_age_sec
  {
    cdr >> ros_message->esdf_age_sec;
  }

  // Field name: pointcloud_age_sec
  {
    cdr >> ros_message->pointcloud_age_sec;
  }

  // Field name: last_collision_check_ms
  {
    cdr >> ros_message->last_collision_check_ms;
  }

  // Field name: active_collision_severity
  {
    cdr >> ros_message->active_collision_severity;
  }

  // Field name: min_distance_to_obstacle
  {
    cdr >> ros_message->min_distance_to_obstacle;
  }

  // Field name: avg_collision_check_latency_ms
  {
    cdr >> ros_message->avg_collision_check_latency_ms;
  }

  // Field name: collision_checks_per_sec
  {
    cdr >> ros_message->collision_checks_per_sec;
  }

  // Field name: velocity_limit_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity_limit_active = tmp ? true : false;
  }

  // Field name: max_safe_velocity
  {
    cdr >> ros_message->max_safe_velocity;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t get_serialized_size_safe_teleop_core__msg__SafetyStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyStatus__ros_msg_type * ros_message = static_cast<const _SafetyStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: safety_mode
  {
    size_t item_size = sizeof(ros_message->safety_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: master_connected
  {
    size_t item_size = sizeof(ros_message->master_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: esdf_available
  {
    size_t item_size = sizeof(ros_message->esdf_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pointcloud_available
  {
    size_t item_size = sizeof(ros_message->pointcloud_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop_active
  {
    size_t item_size = sizeof(ros_message->emergency_stop_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: esdf_age_sec
  {
    size_t item_size = sizeof(ros_message->esdf_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pointcloud_age_sec
  {
    size_t item_size = sizeof(ros_message->pointcloud_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_collision_check_ms
  {
    size_t item_size = sizeof(ros_message->last_collision_check_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_collision_severity
  {
    size_t item_size = sizeof(ros_message->active_collision_severity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_distance_to_obstacle
  {
    size_t item_size = sizeof(ros_message->min_distance_to_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: avg_collision_check_latency_ms
  {
    size_t item_size = sizeof(ros_message->avg_collision_check_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_checks_per_sec
  {
    size_t item_size = sizeof(ros_message->collision_checks_per_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity_limit_active
  {
    size_t item_size = sizeof(ros_message->velocity_limit_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_safe_velocity
  {
    size_t item_size = sizeof(ros_message->max_safe_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t max_serialized_size_safe_teleop_core__msg__SafetyStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: safety_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: master_connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: esdf_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pointcloud_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stop_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: esdf_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pointcloud_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: last_collision_check_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: active_collision_severity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: min_distance_to_obstacle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: avg_collision_check_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: collision_checks_per_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity_limit_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: max_safe_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = safe_teleop_core__msg__SafetyStatus;
    is_plain =
      (
      offsetof(DataType, max_safe_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
bool cdr_serialize_key_safe_teleop_core__msg__SafetyStatus(
  const safe_teleop_core__msg__SafetyStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: safety_mode
  {
    cdr << ros_message->safety_mode;
  }

  // Field name: master_connected
  {
    cdr << (ros_message->master_connected ? true : false);
  }

  // Field name: esdf_available
  {
    cdr << (ros_message->esdf_available ? true : false);
  }

  // Field name: pointcloud_available
  {
    cdr << (ros_message->pointcloud_available ? true : false);
  }

  // Field name: emergency_stop_active
  {
    cdr << (ros_message->emergency_stop_active ? true : false);
  }

  // Field name: esdf_age_sec
  {
    cdr << ros_message->esdf_age_sec;
  }

  // Field name: pointcloud_age_sec
  {
    cdr << ros_message->pointcloud_age_sec;
  }

  // Field name: last_collision_check_ms
  {
    cdr << ros_message->last_collision_check_ms;
  }

  // Field name: active_collision_severity
  {
    cdr << ros_message->active_collision_severity;
  }

  // Field name: min_distance_to_obstacle
  {
    cdr << ros_message->min_distance_to_obstacle;
  }

  // Field name: avg_collision_check_latency_ms
  {
    cdr << ros_message->avg_collision_check_latency_ms;
  }

  // Field name: collision_checks_per_sec
  {
    cdr << ros_message->collision_checks_per_sec;
  }

  // Field name: velocity_limit_active
  {
    cdr << (ros_message->velocity_limit_active ? true : false);
  }

  // Field name: max_safe_velocity
  {
    cdr << ros_message->max_safe_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t get_serialized_size_key_safe_teleop_core__msg__SafetyStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyStatus__ros_msg_type * ros_message = static_cast<const _SafetyStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: safety_mode
  {
    size_t item_size = sizeof(ros_message->safety_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: master_connected
  {
    size_t item_size = sizeof(ros_message->master_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: esdf_available
  {
    size_t item_size = sizeof(ros_message->esdf_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pointcloud_available
  {
    size_t item_size = sizeof(ros_message->pointcloud_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop_active
  {
    size_t item_size = sizeof(ros_message->emergency_stop_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: esdf_age_sec
  {
    size_t item_size = sizeof(ros_message->esdf_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pointcloud_age_sec
  {
    size_t item_size = sizeof(ros_message->pointcloud_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_collision_check_ms
  {
    size_t item_size = sizeof(ros_message->last_collision_check_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_collision_severity
  {
    size_t item_size = sizeof(ros_message->active_collision_severity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_distance_to_obstacle
  {
    size_t item_size = sizeof(ros_message->min_distance_to_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: avg_collision_check_latency_ms
  {
    size_t item_size = sizeof(ros_message->avg_collision_check_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_checks_per_sec
  {
    size_t item_size = sizeof(ros_message->collision_checks_per_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity_limit_active
  {
    size_t item_size = sizeof(ros_message->velocity_limit_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_safe_velocity
  {
    size_t item_size = sizeof(ros_message->max_safe_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_safe_teleop_core
size_t max_serialized_size_key_safe_teleop_core__msg__SafetyStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: safety_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: master_connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: esdf_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pointcloud_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stop_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: esdf_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pointcloud_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: last_collision_check_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: active_collision_severity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: min_distance_to_obstacle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: avg_collision_check_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: collision_checks_per_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity_limit_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: max_safe_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = safe_teleop_core__msg__SafetyStatus;
    is_plain =
      (
      offsetof(DataType, max_safe_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SafetyStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const safe_teleop_core__msg__SafetyStatus * ros_message = static_cast<const safe_teleop_core__msg__SafetyStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_safe_teleop_core__msg__SafetyStatus(ros_message, cdr);
}

static bool _SafetyStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  safe_teleop_core__msg__SafetyStatus * ros_message = static_cast<safe_teleop_core__msg__SafetyStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_safe_teleop_core__msg__SafetyStatus(cdr, ros_message);
}

static uint32_t _SafetyStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_safe_teleop_core__msg__SafetyStatus(
      untyped_ros_message, 0));
}

static size_t _SafetyStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_safe_teleop_core__msg__SafetyStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SafetyStatus = {
  "safe_teleop_core::msg",
  "SafetyStatus",
  _SafetyStatus__cdr_serialize,
  _SafetyStatus__cdr_deserialize,
  _SafetyStatus__get_serialized_size,
  _SafetyStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SafetyStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SafetyStatus,
  get_message_typesupport_handle_function,
  &safe_teleop_core__msg__SafetyStatus__get_type_hash,
  &safe_teleop_core__msg__SafetyStatus__get_type_description,
  &safe_teleop_core__msg__SafetyStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, safe_teleop_core, msg, SafetyStatus)() {
  return &_SafetyStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
