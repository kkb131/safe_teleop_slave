// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_status.h"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NORMAL'.
/**
  * Safety mode (matches C++ enum in collision_detector_node.cpp)
  * Master connected, all sensors active
 */
enum
{
  safe_teleop_core__msg__SafetyStatus__NORMAL = 0
};

/// Constant 'DEGRADED'.
/**
  * Master disconnected, using cached ESDF
 */
enum
{
  safe_teleop_core__msg__SafetyStatus__DEGRADED = 1
};

/// Constant 'EMERGENCY'.
/**
  * Sensor failure or critical collision
 */
enum
{
  safe_teleop_core__msg__SafetyStatus__EMERGENCY = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SafetyStatus in the package safe_teleop_core.
/**
  * SafetyStatus message - overall system safety state
 */
typedef struct safe_teleop_core__msg__SafetyStatus
{
  std_msgs__msg__Header header;
  uint8_t safety_mode;
  /// System health
  bool master_connected;
  bool esdf_available;
  bool pointcloud_available;
  bool emergency_stop_active;
  /// Timing diagnostics
  /// seconds since last ESDF update
  float esdf_age_sec;
  /// seconds since last PointCloud
  float pointcloud_age_sec;
  /// latency of last collision check
  float last_collision_check_ms;
  /// Active warnings
  /// from CollisionWarning
  uint8_t active_collision_severity;
  /// meters
  float min_distance_to_obstacle;
  /// Performance metrics
  float avg_collision_check_latency_ms;
  uint32_t collision_checks_per_sec;
  /// Recommended actions
  bool velocity_limit_active;
  /// m/s
  float max_safe_velocity;
} safe_teleop_core__msg__SafetyStatus;

// Struct for a sequence of safe_teleop_core__msg__SafetyStatus.
typedef struct safe_teleop_core__msg__SafetyStatus__Sequence
{
  safe_teleop_core__msg__SafetyStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__msg__SafetyStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_
