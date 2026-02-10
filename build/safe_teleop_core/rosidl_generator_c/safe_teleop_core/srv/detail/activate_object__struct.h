// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from safe_teleop_core:srv/ActivateObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/activate_object.h"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__STRUCT_H_
#define SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ActivateObject in the package safe_teleop_core.
typedef struct safe_teleop_core__srv__ActivateObject_Request
{
  /// Request
  /// ID of object to activate/deactivate
  rosidl_runtime_c__String object_id;
  /// true = allow contact, false = prohibit contact
  bool activate;
  /// optional additional margin (meters), default=0.0
  float safety_margin;
} safe_teleop_core__srv__ActivateObject_Request;

// Struct for a sequence of safe_teleop_core__srv__ActivateObject_Request.
typedef struct safe_teleop_core__srv__ActivateObject_Request__Sequence
{
  safe_teleop_core__srv__ActivateObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__srv__ActivateObject_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'updated_status'
#include "safe_teleop_core/msg/detail/object_status__struct.h"

/// Struct defined in srv/ActivateObject in the package safe_teleop_core.
typedef struct safe_teleop_core__srv__ActivateObject_Response
{
  bool success;
  /// human-readable result
  rosidl_runtime_c__String message;
  /// new object status
  safe_teleop_core__msg__ObjectStatus updated_status;
} safe_teleop_core__srv__ActivateObject_Response;

// Struct for a sequence of safe_teleop_core__srv__ActivateObject_Response.
typedef struct safe_teleop_core__srv__ActivateObject_Response__Sequence
{
  safe_teleop_core__srv__ActivateObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__srv__ActivateObject_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  safe_teleop_core__srv__ActivateObject_Event__request__MAX_SIZE = 1
};
// response
enum
{
  safe_teleop_core__srv__ActivateObject_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ActivateObject in the package safe_teleop_core.
typedef struct safe_teleop_core__srv__ActivateObject_Event
{
  service_msgs__msg__ServiceEventInfo info;
  safe_teleop_core__srv__ActivateObject_Request__Sequence request;
  safe_teleop_core__srv__ActivateObject_Response__Sequence response;
} safe_teleop_core__srv__ActivateObject_Event;

// Struct for a sequence of safe_teleop_core__srv__ActivateObject_Event.
typedef struct safe_teleop_core__srv__ActivateObject_Event__Sequence
{
  safe_teleop_core__srv__ActivateObject_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} safe_teleop_core__srv__ActivateObject_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__STRUCT_H_
