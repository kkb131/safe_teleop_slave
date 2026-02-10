// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/collision_warning.h"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__STRUCT_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Severity levels
 */
enum
{
  safe_teleop_core__msg__CollisionWarning__NONE = 0
};

/// Constant 'LOW'.
enum
{
  safe_teleop_core__msg__CollisionWarning__LOW = 1
};

/// Constant 'MEDIUM'.
enum
{
  safe_teleop_core__msg__CollisionWarning__MEDIUM = 2
};

/// Constant 'HIGH'.
enum
{
  safe_teleop_core__msg__CollisionWarning__HIGH = 3
};

/// Constant 'CRITICAL'.
/**
  * immediate stop required
 */
enum
{
  safe_teleop_core__msg__CollisionWarning__CRITICAL = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'object_id'
// Member 'warning_source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CollisionWarning in the package safe_teleop_core.
/**
  * CollisionWarning message - real-time collision risk assessment
 */
typedef struct safe_teleop_core__msg__CollisionWarning
{
  std_msgs__msg__Header header;
  uint8_t severity;
  /// Collision details
  /// ID of object at risk
  rosidl_runtime_c__String object_id;
  /// meters
  float distance_to_collision;
  /// seconds (estimated)
  float time_to_collision;
  /// Recommended action
  bool emergency_stop_required;
  bool velocity_reduction_required;
  /// m/s
  float max_safe_velocity;
  /// Source of warning
  /// "esdf", "pointcloud", "sensor"
  rosidl_runtime_c__String warning_source;
} safe_teleop_core__msg__CollisionWarning;

// Struct for a sequence of safe_teleop_core__msg__CollisionWarning.
typedef struct safe_teleop_core__msg__CollisionWarning__Sequence
{
  safe_teleop_core__msg__CollisionWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__msg__CollisionWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__STRUCT_H_
