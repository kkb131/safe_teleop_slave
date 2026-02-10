// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/dynamic_object.h"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PERSON'.
/**
  * Classification
 */
enum
{
  safe_teleop_core__msg__DynamicObject__PERSON = 0
};

/// Constant 'MOVING_OBJECT'.
enum
{
  safe_teleop_core__msg__DynamicObject__MOVING_OBJECT = 1
};

/// Constant 'ROBOT_INTERACTION'.
/**
  * object moved by robot
 */
enum
{
  safe_teleop_core__msg__DynamicObject__ROBOT_INTERACTION = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'object_id'
#include "rosidl_runtime_c/string.h"
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'bounding_box'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'first_detected'
// Member 'last_updated'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/DynamicObject in the package safe_teleop_core.
/**
  * DynamicObject message - tracked moving object
 */
typedef struct safe_teleop_core__msg__DynamicObject
{
  std_msgs__msg__Header header;
  /// Object identification
  rosidl_runtime_c__String object_id;
  /// unique tracking number
  uint64_t tracking_id;
  /// Motion information
  geometry_msgs__msg__Pose current_pose;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Vector3 bounding_box;
  uint8_t object_class;
  /// Tracking quality
  /// 0.0 to 1.0
  float tracking_confidence;
  /// number of consecutive frames
  uint32_t frames_tracked;
  /// Temporal information
  builtin_interfaces__msg__Time first_detected;
  builtin_interfaces__msg__Time last_updated;
} safe_teleop_core__msg__DynamicObject;

// Struct for a sequence of safe_teleop_core__msg__DynamicObject.
typedef struct safe_teleop_core__msg__DynamicObject__Sequence
{
  safe_teleop_core__msg__DynamicObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__msg__DynamicObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_
