// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "safe_teleop_core/msg/detail/object_status__rosidl_typesupport_introspection_c.h"
#include "safe_teleop_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "safe_teleop_core/msg/detail/object_status__functions.h"
#include "safe_teleop_core/msg/detail/object_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `object_id`
// Member `object_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `bounding_box`
#include "geometry_msgs/msg/vector3.h"
// Member `bounding_box`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  safe_teleop_core__msg__ObjectStatus__init(message_memory);
}

void safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_fini_function(void * message_memory)
{
  safe_teleop_core__msg__ObjectStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, object_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, bounding_box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, motion_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, is_activated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detection_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__ObjectStatus, detection_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_members = {
  "safe_teleop_core__msg",  // message namespace
  "ObjectStatus",  // message name
  8,  // number of fields
  sizeof(safe_teleop_core__msg__ObjectStatus),
  false,  // has_any_key_member_
  safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_member_array,  // message members
  safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_type_support_handle = {
  0,
  &safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_members,
  get_message_typesupport_handle_function,
  &safe_teleop_core__msg__ObjectStatus__get_type_hash,
  &safe_teleop_core__msg__ObjectStatus__get_type_description,
  &safe_teleop_core__msg__ObjectStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_safe_teleop_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, msg, ObjectStatus)() {
  safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_type_support_handle.typesupport_identifier) {
    safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &safe_teleop_core__msg__ObjectStatus__rosidl_typesupport_introspection_c__ObjectStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
