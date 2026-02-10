// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/safety_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "safe_teleop_core/msg/detail/safety_status__functions.h"
#include "safe_teleop_core/msg/detail/safety_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace safe_teleop_core
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize(
  const safe_teleop_core::msg::SafetyStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: safety_mode
  cdr << ros_message.safety_mode;

  // Member: master_connected
  cdr << (ros_message.master_connected ? true : false);

  // Member: esdf_available
  cdr << (ros_message.esdf_available ? true : false);

  // Member: pointcloud_available
  cdr << (ros_message.pointcloud_available ? true : false);

  // Member: emergency_stop_active
  cdr << (ros_message.emergency_stop_active ? true : false);

  // Member: esdf_age_sec
  cdr << ros_message.esdf_age_sec;

  // Member: pointcloud_age_sec
  cdr << ros_message.pointcloud_age_sec;

  // Member: last_collision_check_ms
  cdr << ros_message.last_collision_check_ms;

  // Member: active_collision_severity
  cdr << ros_message.active_collision_severity;

  // Member: min_distance_to_obstacle
  cdr << ros_message.min_distance_to_obstacle;

  // Member: avg_collision_check_latency_ms
  cdr << ros_message.avg_collision_check_latency_ms;

  // Member: collision_checks_per_sec
  cdr << ros_message.collision_checks_per_sec;

  // Member: velocity_limit_active
  cdr << (ros_message.velocity_limit_active ? true : false);

  // Member: max_safe_velocity
  cdr << ros_message.max_safe_velocity;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  safe_teleop_core::msg::SafetyStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: safety_mode
  cdr >> ros_message.safety_mode;

  // Member: master_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.master_connected = tmp ? true : false;
  }

  // Member: esdf_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.esdf_available = tmp ? true : false;
  }

  // Member: pointcloud_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pointcloud_available = tmp ? true : false;
  }

  // Member: emergency_stop_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stop_active = tmp ? true : false;
  }

  // Member: esdf_age_sec
  cdr >> ros_message.esdf_age_sec;

  // Member: pointcloud_age_sec
  cdr >> ros_message.pointcloud_age_sec;

  // Member: last_collision_check_ms
  cdr >> ros_message.last_collision_check_ms;

  // Member: active_collision_severity
  cdr >> ros_message.active_collision_severity;

  // Member: min_distance_to_obstacle
  cdr >> ros_message.min_distance_to_obstacle;

  // Member: avg_collision_check_latency_ms
  cdr >> ros_message.avg_collision_check_latency_ms;

  // Member: collision_checks_per_sec
  cdr >> ros_message.collision_checks_per_sec;

  // Member: velocity_limit_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.velocity_limit_active = tmp ? true : false;
  }

  // Member: max_safe_velocity
  cdr >> ros_message.max_safe_velocity;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size(
  const safe_teleop_core::msg::SafetyStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: safety_mode
  {
    size_t item_size = sizeof(ros_message.safety_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: master_connected
  {
    size_t item_size = sizeof(ros_message.master_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esdf_available
  {
    size_t item_size = sizeof(ros_message.esdf_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pointcloud_available
  {
    size_t item_size = sizeof(ros_message.pointcloud_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop_active
  {
    size_t item_size = sizeof(ros_message.emergency_stop_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esdf_age_sec
  {
    size_t item_size = sizeof(ros_message.esdf_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pointcloud_age_sec
  {
    size_t item_size = sizeof(ros_message.pointcloud_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_collision_check_ms
  {
    size_t item_size = sizeof(ros_message.last_collision_check_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: active_collision_severity
  {
    size_t item_size = sizeof(ros_message.active_collision_severity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_distance_to_obstacle
  {
    size_t item_size = sizeof(ros_message.min_distance_to_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: avg_collision_check_latency_ms
  {
    size_t item_size = sizeof(ros_message.avg_collision_check_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_checks_per_sec
  {
    size_t item_size = sizeof(ros_message.collision_checks_per_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocity_limit_active
  {
    size_t item_size = sizeof(ros_message.velocity_limit_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_safe_velocity
  {
    size_t item_size = sizeof(ros_message.max_safe_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_SafetyStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: safety_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: master_connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: esdf_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: pointcloud_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: emergency_stop_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: esdf_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pointcloud_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: last_collision_check_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: active_collision_severity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: min_distance_to_obstacle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: avg_collision_check_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: collision_checks_per_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: velocity_limit_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: max_safe_velocity
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
    using DataType = safe_teleop_core::msg::SafetyStatus;
    is_plain =
      (
      offsetof(DataType, max_safe_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
cdr_serialize_key(
  const safe_teleop_core::msg::SafetyStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: safety_mode
  cdr << ros_message.safety_mode;

  // Member: master_connected
  cdr << (ros_message.master_connected ? true : false);

  // Member: esdf_available
  cdr << (ros_message.esdf_available ? true : false);

  // Member: pointcloud_available
  cdr << (ros_message.pointcloud_available ? true : false);

  // Member: emergency_stop_active
  cdr << (ros_message.emergency_stop_active ? true : false);

  // Member: esdf_age_sec
  cdr << ros_message.esdf_age_sec;

  // Member: pointcloud_age_sec
  cdr << ros_message.pointcloud_age_sec;

  // Member: last_collision_check_ms
  cdr << ros_message.last_collision_check_ms;

  // Member: active_collision_severity
  cdr << ros_message.active_collision_severity;

  // Member: min_distance_to_obstacle
  cdr << ros_message.min_distance_to_obstacle;

  // Member: avg_collision_check_latency_ms
  cdr << ros_message.avg_collision_check_latency_ms;

  // Member: collision_checks_per_sec
  cdr << ros_message.collision_checks_per_sec;

  // Member: velocity_limit_active
  cdr << (ros_message.velocity_limit_active ? true : false);

  // Member: max_safe_velocity
  cdr << ros_message.max_safe_velocity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
get_serialized_size_key(
  const safe_teleop_core::msg::SafetyStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: safety_mode
  {
    size_t item_size = sizeof(ros_message.safety_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: master_connected
  {
    size_t item_size = sizeof(ros_message.master_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esdf_available
  {
    size_t item_size = sizeof(ros_message.esdf_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pointcloud_available
  {
    size_t item_size = sizeof(ros_message.pointcloud_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop_active
  {
    size_t item_size = sizeof(ros_message.emergency_stop_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: esdf_age_sec
  {
    size_t item_size = sizeof(ros_message.esdf_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pointcloud_age_sec
  {
    size_t item_size = sizeof(ros_message.pointcloud_age_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_collision_check_ms
  {
    size_t item_size = sizeof(ros_message.last_collision_check_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: active_collision_severity
  {
    size_t item_size = sizeof(ros_message.active_collision_severity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_distance_to_obstacle
  {
    size_t item_size = sizeof(ros_message.min_distance_to_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: avg_collision_check_latency_ms
  {
    size_t item_size = sizeof(ros_message.avg_collision_check_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_checks_per_sec
  {
    size_t item_size = sizeof(ros_message.collision_checks_per_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocity_limit_active
  {
    size_t item_size = sizeof(ros_message.velocity_limit_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_safe_velocity
  {
    size_t item_size = sizeof(ros_message.max_safe_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_safe_teleop_core
max_serialized_size_key_SafetyStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: safety_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: master_connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esdf_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pointcloud_available
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_stop_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esdf_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pointcloud_age_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: last_collision_check_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: active_collision_severity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_distance_to_obstacle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: avg_collision_check_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: collision_checks_per_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_limit_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_safe_velocity
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
    using DataType = safe_teleop_core::msg::SafetyStatus;
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
  auto typed_message =
    static_cast<const safe_teleop_core::msg::SafetyStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SafetyStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<safe_teleop_core::msg::SafetyStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SafetyStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const safe_teleop_core::msg::SafetyStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SafetyStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SafetyStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SafetyStatus__callbacks = {
  "safe_teleop_core::msg",
  "SafetyStatus",
  _SafetyStatus__cdr_serialize,
  _SafetyStatus__cdr_deserialize,
  _SafetyStatus__get_serialized_size,
  _SafetyStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SafetyStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SafetyStatus__callbacks,
  get_message_typesupport_handle_function,
  &safe_teleop_core__msg__SafetyStatus__get_type_hash,
  &safe_teleop_core__msg__SafetyStatus__get_type_description,
  &safe_teleop_core__msg__SafetyStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace safe_teleop_core

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_safe_teleop_core
const rosidl_message_type_support_t *
get_message_type_support_handle<safe_teleop_core::msg::SafetyStatus>()
{
  return &safe_teleop_core::msg::typesupport_fastrtps_cpp::_SafetyStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, msg, SafetyStatus)() {
  return &safe_teleop_core::msg::typesupport_fastrtps_cpp::_SafetyStatus__handle;
}

#ifdef __cplusplus
}
#endif
