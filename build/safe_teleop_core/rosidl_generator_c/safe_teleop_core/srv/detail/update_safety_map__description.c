// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

#include "safe_teleop_core/srv/detail/update_safety_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__srv__UpdateSafetyMap__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x58, 0x8a, 0x10, 0x52, 0x62, 0xa1, 0x9f,
      0xa1, 0xd5, 0x78, 0x3a, 0x90, 0x1b, 0x54, 0x41,
      0x99, 0xc1, 0x3e, 0xdc, 0x1b, 0x27, 0xbb, 0xea,
      0x3c, 0x35, 0x2f, 0xcb, 0xff, 0x7f, 0xdd, 0x9d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0xb3, 0x86, 0xd2, 0x37, 0x1d, 0x6f, 0x3d,
      0x3b, 0xbe, 0x99, 0x33, 0xab, 0x9e, 0x7d, 0x54,
      0x55, 0xdb, 0x28, 0x0b, 0xd3, 0xe2, 0x7b, 0x73,
      0x5e, 0x6b, 0xfd, 0xcf, 0x86, 0x07, 0xeb, 0x64,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x9e, 0x35, 0xf3, 0x6d, 0x05, 0xdc, 0x7d,
      0x9a, 0x5d, 0x07, 0x0f, 0xea, 0x98, 0x8e, 0xd5,
      0x30, 0x13, 0xed, 0x43, 0xa1, 0xe4, 0xb3, 0x6a,
      0x21, 0x55, 0xc3, 0xe3, 0x6f, 0xec, 0x90, 0xaa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x80, 0x0c, 0x47, 0x8d, 0x67, 0x09, 0x9b,
      0xac, 0x9e, 0xa1, 0x0b, 0x52, 0xf7, 0xdd, 0x09,
      0x66, 0x67, 0x37, 0x8d, 0x04, 0xaf, 0x46, 0x9c,
      0xe4, 0xd4, 0xee, 0x32, 0x18, 0x56, 0x5f, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char safe_teleop_core__srv__UpdateSafetyMap__TYPE_NAME[] = "safe_teleop_core/srv/UpdateSafetyMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char safe_teleop_core__srv__UpdateSafetyMap_Event__TYPE_NAME[] = "safe_teleop_core/srv/UpdateSafetyMap_Event";
static char safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME[] = "safe_teleop_core/srv/UpdateSafetyMap_Request";
static char safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME[] = "safe_teleop_core/srv/UpdateSafetyMap_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char safe_teleop_core__srv__UpdateSafetyMap__FIELD_NAME__request_message[] = "request_message";
static char safe_teleop_core__srv__UpdateSafetyMap__FIELD_NAME__response_message[] = "response_message";
static char safe_teleop_core__srv__UpdateSafetyMap__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field safe_teleop_core__srv__UpdateSafetyMap__FIELDS[] = {
  {
    {safe_teleop_core__srv__UpdateSafetyMap__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {safe_teleop_core__srv__UpdateSafetyMap_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription safe_teleop_core__srv__UpdateSafetyMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
safe_teleop_core__srv__UpdateSafetyMap__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {safe_teleop_core__srv__UpdateSafetyMap__TYPE_NAME, 36, 36},
      {safe_teleop_core__srv__UpdateSafetyMap__FIELDS, 3, 3},
    },
    {safe_teleop_core__srv__UpdateSafetyMap__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char safe_teleop_core__srv__UpdateSafetyMap_Request__FIELD_NAME__force_full_update[] = "force_full_update";
static char safe_teleop_core__srv__UpdateSafetyMap_Request__FIELD_NAME__specific_zones[] = "specific_zones";

static rosidl_runtime_c__type_description__Field safe_teleop_core__srv__UpdateSafetyMap_Request__FIELDS[] = {
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Request__FIELD_NAME__force_full_update, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Request__FIELD_NAME__specific_zones, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME, 44, 44},
      {safe_teleop_core__srv__UpdateSafetyMap_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__success[] = "success";
static char safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__message[] = "message";
static char safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__zones_updated[] = "zones_updated";
static char safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__update_duration[] = "update_duration";
static char safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__map_timestamp[] = "map_timestamp";

static rosidl_runtime_c__type_description__Field safe_teleop_core__srv__UpdateSafetyMap_Response__FIELDS[] = {
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__zones_updated, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__update_duration, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__FIELD_NAME__map_timestamp, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription safe_teleop_core__srv__UpdateSafetyMap_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME, 45, 45},
      {safe_teleop_core__srv__UpdateSafetyMap_Response__FIELDS, 5, 5},
    },
    {safe_teleop_core__srv__UpdateSafetyMap_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char safe_teleop_core__srv__UpdateSafetyMap_Event__FIELD_NAME__info[] = "info";
static char safe_teleop_core__srv__UpdateSafetyMap_Event__FIELD_NAME__request[] = "request";
static char safe_teleop_core__srv__UpdateSafetyMap_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field safe_teleop_core__srv__UpdateSafetyMap_Event__FIELDS[] = {
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription safe_teleop_core__srv__UpdateSafetyMap_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {safe_teleop_core__srv__UpdateSafetyMap_Event__TYPE_NAME, 42, 42},
      {safe_teleop_core__srv__UpdateSafetyMap_Event__FIELDS, 3, 3},
    },
    {safe_teleop_core__srv__UpdateSafetyMap_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UpdateSafetyMap service - force refresh of safety map from latest ESDF\n"
  "\n"
  "# Request\n"
  "bool force_full_update  # true = rebuild entire map, false = incremental update\n"
  "string[] specific_zones  # empty = all zones, or list specific zone IDs\n"
  "\n"
  "---\n"
  "# Response\n"
  "bool success\n"
  "string message\n"
  "uint32 zones_updated  # number of zones updated\n"
  "float32 update_duration  # seconds taken\n"
  "builtin_interfaces/Time map_timestamp  # timestamp of updated map";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__srv__UpdateSafetyMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {safe_teleop_core__srv__UpdateSafetyMap__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 435, 435},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__srv__UpdateSafetyMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {safe_teleop_core__srv__UpdateSafetyMap_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__srv__UpdateSafetyMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {safe_teleop_core__srv__UpdateSafetyMap_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__srv__UpdateSafetyMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {safe_teleop_core__srv__UpdateSafetyMap_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__srv__UpdateSafetyMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *safe_teleop_core__srv__UpdateSafetyMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *safe_teleop_core__srv__UpdateSafetyMap_Event__get_individual_type_description_source(NULL);
    sources[3] = *safe_teleop_core__srv__UpdateSafetyMap_Request__get_individual_type_description_source(NULL);
    sources[4] = *safe_teleop_core__srv__UpdateSafetyMap_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *safe_teleop_core__srv__UpdateSafetyMap_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *safe_teleop_core__srv__UpdateSafetyMap_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *safe_teleop_core__srv__UpdateSafetyMap_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *safe_teleop_core__srv__UpdateSafetyMap_Request__get_individual_type_description_source(NULL);
    sources[3] = *safe_teleop_core__srv__UpdateSafetyMap_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
