// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/object_status.h"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATIC'.
/**
  * Classification
 */
enum
{
  safe_teleop_core__msg__ObjectStatus__STATIC = 0
};

/// Constant 'DYNAMIC'.
enum
{
  safe_teleop_core__msg__ObjectStatus__DYNAMIC = 1
};

/// Constant 'STATIC_TO_DYNAMIC'.
/**
  * static object that moved due to robot interaction
 */
enum
{
  safe_teleop_core__msg__ObjectStatus__STATIC_TO_DYNAMIC = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'object_id'
// Member 'object_type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'bounding_box'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ObjectStatus in the package safe_teleop_core.
/**
  * ObjectStatus message - represents state of a detected object
 */
typedef struct safe_teleop_core__msg__ObjectStatus
{
  std_msgs__msg__Header header;
  /// Object identification
  rosidl_runtime_c__String object_id;
  /// e.g., "box", "person", "tool"
  rosidl_runtime_c__String object_type;
  /// Spatial information
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Vector3 bounding_box;
  uint8_t motion_state;
  /// Activation status
  /// true = robot can touch, false = collision prohibited
  bool is_activated;
  /// Confidence
  /// 0.0 to 1.0
  float detection_confidence;
} safe_teleop_core__msg__ObjectStatus;

// Struct for a sequence of safe_teleop_core__msg__ObjectStatus.
typedef struct safe_teleop_core__msg__ObjectStatus__Sequence
{
  safe_teleop_core__msg__ObjectStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__msg__ObjectStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_
