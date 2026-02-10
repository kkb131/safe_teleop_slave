// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/update_safety_map.h"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__STRUCT_H_
#define SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'specific_zones'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UpdateSafetyMap in the package safe_teleop_core.
typedef struct safe_teleop_core__srv__UpdateSafetyMap_Request
{
  /// Request
  /// true = rebuild entire map, false = incremental update
  bool force_full_update;
  /// empty = all zones, or list specific zone IDs
  rosidl_runtime_c__String__Sequence specific_zones;
} safe_teleop_core__srv__UpdateSafetyMap_Request;

// Struct for a sequence of safe_teleop_core__srv__UpdateSafetyMap_Request.
typedef struct safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence
{
  safe_teleop_core__srv__UpdateSafetyMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'map_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/UpdateSafetyMap in the package safe_teleop_core.
typedef struct safe_teleop_core__srv__UpdateSafetyMap_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// number of zones updated
  uint32_t zones_updated;
  /// seconds taken
  float update_duration;
  /// timestamp of updated map
  builtin_interfaces__msg__Time map_timestamp;
} safe_teleop_core__srv__UpdateSafetyMap_Response;

// Struct for a sequence of safe_teleop_core__srv__UpdateSafetyMap_Response.
typedef struct safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence
{
  safe_teleop_core__srv__UpdateSafetyMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  safe_teleop_core__srv__UpdateSafetyMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  safe_teleop_core__srv__UpdateSafetyMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/UpdateSafetyMap in the package safe_teleop_core.
typedef struct safe_teleop_core__srv__UpdateSafetyMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence request;
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence response;
} safe_teleop_core__srv__UpdateSafetyMap_Event;

// Struct for a sequence of safe_teleop_core__srv__UpdateSafetyMap_Event.
typedef struct safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence
{
  safe_teleop_core__srv__UpdateSafetyMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__STRUCT_H_
