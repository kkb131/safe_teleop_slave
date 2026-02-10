// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "safe_teleop_core/srv/detail/update_safety_map__functions.h"
#include "safe_teleop_core/srv/detail/update_safety_map__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace safe_teleop_core
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateSafetyMap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateSafetyMap_Request_type_support_ids_t;

static const _UpdateSafetyMap_Request_type_support_ids_t _UpdateSafetyMap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateSafetyMap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateSafetyMap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateSafetyMap_Request_type_support_symbol_names_t _UpdateSafetyMap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, UpdateSafetyMap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, safe_teleop_core, srv, UpdateSafetyMap_Request)),
  }
};

typedef struct _UpdateSafetyMap_Request_type_support_data_t
{
  void * data[2];
} _UpdateSafetyMap_Request_type_support_data_t;

static _UpdateSafetyMap_Request_type_support_data_t _UpdateSafetyMap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateSafetyMap_Request_message_typesupport_map = {
  2,
  "safe_teleop_core",
  &_UpdateSafetyMap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UpdateSafetyMap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UpdateSafetyMap_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpdateSafetyMap_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateSafetyMap_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Request>()
{
  return &::safe_teleop_core::srv::rosidl_typesupport_cpp::UpdateSafetyMap_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, safe_teleop_core, srv, UpdateSafetyMap_Request)() {
  return get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__functions.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace safe_teleop_core
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateSafetyMap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateSafetyMap_Response_type_support_ids_t;

static const _UpdateSafetyMap_Response_type_support_ids_t _UpdateSafetyMap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateSafetyMap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateSafetyMap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateSafetyMap_Response_type_support_symbol_names_t _UpdateSafetyMap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, UpdateSafetyMap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, safe_teleop_core, srv, UpdateSafetyMap_Response)),
  }
};

typedef struct _UpdateSafetyMap_Response_type_support_data_t
{
  void * data[2];
} _UpdateSafetyMap_Response_type_support_data_t;

static _UpdateSafetyMap_Response_type_support_data_t _UpdateSafetyMap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateSafetyMap_Response_message_typesupport_map = {
  2,
  "safe_teleop_core",
  &_UpdateSafetyMap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UpdateSafetyMap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UpdateSafetyMap_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpdateSafetyMap_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateSafetyMap_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Response>()
{
  return &::safe_teleop_core::srv::rosidl_typesupport_cpp::UpdateSafetyMap_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, safe_teleop_core, srv, UpdateSafetyMap_Response)() {
  return get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__functions.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace safe_teleop_core
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateSafetyMap_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateSafetyMap_Event_type_support_ids_t;

static const _UpdateSafetyMap_Event_type_support_ids_t _UpdateSafetyMap_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateSafetyMap_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateSafetyMap_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateSafetyMap_Event_type_support_symbol_names_t _UpdateSafetyMap_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, UpdateSafetyMap_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, safe_teleop_core, srv, UpdateSafetyMap_Event)),
  }
};

typedef struct _UpdateSafetyMap_Event_type_support_data_t
{
  void * data[2];
} _UpdateSafetyMap_Event_type_support_data_t;

static _UpdateSafetyMap_Event_type_support_data_t _UpdateSafetyMap_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateSafetyMap_Event_message_typesupport_map = {
  2,
  "safe_teleop_core",
  &_UpdateSafetyMap_Event_message_typesupport_ids.typesupport_identifier[0],
  &_UpdateSafetyMap_Event_message_typesupport_symbol_names.symbol_name[0],
  &_UpdateSafetyMap_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpdateSafetyMap_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateSafetyMap_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Event>()
{
  return &::safe_teleop_core::srv::rosidl_typesupport_cpp::UpdateSafetyMap_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, safe_teleop_core, srv, UpdateSafetyMap_Event)() {
  return get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace safe_teleop_core
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateSafetyMap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateSafetyMap_type_support_ids_t;

static const _UpdateSafetyMap_type_support_ids_t _UpdateSafetyMap_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateSafetyMap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateSafetyMap_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateSafetyMap_type_support_symbol_names_t _UpdateSafetyMap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, srv, UpdateSafetyMap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, safe_teleop_core, srv, UpdateSafetyMap)),
  }
};

typedef struct _UpdateSafetyMap_type_support_data_t
{
  void * data[2];
} _UpdateSafetyMap_type_support_data_t;

static _UpdateSafetyMap_type_support_data_t _UpdateSafetyMap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateSafetyMap_service_typesupport_map = {
  2,
  "safe_teleop_core",
  &_UpdateSafetyMap_service_typesupport_ids.typesupport_identifier[0],
  &_UpdateSafetyMap_service_typesupport_symbol_names.symbol_name[0],
  &_UpdateSafetyMap_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UpdateSafetyMap_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateSafetyMap_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<safe_teleop_core::srv::UpdateSafetyMap>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<safe_teleop_core::srv::UpdateSafetyMap>,
  &safe_teleop_core__srv__UpdateSafetyMap__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap>()
{
  return &::safe_teleop_core::srv::rosidl_typesupport_cpp::UpdateSafetyMap_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, safe_teleop_core, srv, UpdateSafetyMap)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<safe_teleop_core::srv::UpdateSafetyMap>();
}

#ifdef __cplusplus
}
#endif
