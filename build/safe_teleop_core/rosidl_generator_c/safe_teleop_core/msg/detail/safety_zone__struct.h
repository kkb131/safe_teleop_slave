// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:msg/SafetyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_zone.h"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__STRUCT_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'zone_id'
// Member 'zone_name'
#include "rosidl_runtime_c/string.h"
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SafetyZone in the package safe_teleop_core.
/**
  * SafetyZone message - defines safe/unsafe regions in 3D space
 */
typedef struct safe_teleop_core__msg__SafetyZone
{
  std_msgs__msg__Header header;
  /// Zone identification
  rosidl_runtime_c__String zone_id;
  rosidl_runtime_c__String zone_name;
  /// Geometric definition
  geometry_msgs__msg__Point center;
  /// bounding box dimensions
  geometry_msgs__msg__Vector3 size;
  /// additional margin in meters
  float safety_margin;
  /// Status
  /// true if robot can enter
  bool is_active;
  /// 0=low, 1=medium, 2=high, 3=critical
  uint8_t priority;
  /// Dynamic properties
  /// true if zone contains moving objects
  bool is_dynamic;
  /// m/s, for dynamic zones
  float velocity_magnitude;
} safe_teleop_core__msg__SafetyZone;

// Struct for a sequence of safe_teleop_core__msg__SafetyZone.
typedef struct safe_teleop_core__msg__SafetyZone__Sequence
{
  safe_teleop_core__msg__SafetyZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__msg__SafetyZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__STRUCT_H_
