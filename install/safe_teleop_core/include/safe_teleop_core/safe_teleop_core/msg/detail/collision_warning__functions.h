// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/collision_warning.h"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__FUNCTIONS_H_
#define SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "safe_teleop_core/msg/rosidl_generator_c__visibility_control.h"

#include "safe_teleop_core/msg/detail/collision_warning__struct.h"

/// Initialize msg/CollisionWarning message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * safe_teleop_core__msg__CollisionWarning
 * )) before or use
 * safe_teleop_core__msg__CollisionWarning__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
bool
safe_teleop_core__msg__CollisionWarning__init(safe_teleop_core__msg__CollisionWarning * msg);

/// Finalize msg/CollisionWarning message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
void
safe_teleop_core__msg__CollisionWarning__fini(safe_teleop_core__msg__CollisionWarning * msg);

/// Create msg/CollisionWarning message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * safe_teleop_core__msg__CollisionWarning__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
safe_teleop_core__msg__CollisionWarning *
safe_teleop_core__msg__CollisionWarning__create(void);

/// Destroy msg/CollisionWarning message.
/**
 * It calls
 * safe_teleop_core__msg__CollisionWarning__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
void
safe_teleop_core__msg__CollisionWarning__destroy(safe_teleop_core__msg__CollisionWarning * msg);

/// Check for msg/CollisionWarning message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
bool
safe_teleop_core__msg__CollisionWarning__are_equal(const safe_teleop_core__msg__CollisionWarning * lhs, const safe_teleop_core__msg__CollisionWarning * rhs);

/// Copy a msg/CollisionWarning message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
bool
safe_teleop_core__msg__CollisionWarning__copy(
  const safe_teleop_core__msg__CollisionWarning * input,
  safe_teleop_core__msg__CollisionWarning * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__msg__CollisionWarning__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_runtime_c__type_description__TypeDescription *
safe_teleop_core__msg__CollisionWarning__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__msg__CollisionWarning__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__msg__CollisionWarning__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CollisionWarning messages.
/**
 * It allocates the memory for the number of elements and calls
 * safe_teleop_core__msg__CollisionWarning__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
bool
safe_teleop_core__msg__CollisionWarning__Sequence__init(safe_teleop_core__msg__CollisionWarning__Sequence * array, size_t size);

/// Finalize array of msg/CollisionWarning messages.
/**
 * It calls
 * safe_teleop_core__msg__CollisionWarning__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
void
safe_teleop_core__msg__CollisionWarning__Sequence__fini(safe_teleop_core__msg__CollisionWarning__Sequence * array);

/// Create array of msg/CollisionWarning messages.
/**
 * It allocates the memory for the array and calls
 * safe_teleop_core__msg__CollisionWarning__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
safe_teleop_core__msg__CollisionWarning__Sequence *
safe_teleop_core__msg__CollisionWarning__Sequence__create(size_t size);

/// Destroy array of msg/CollisionWarning messages.
/**
 * It calls
 * safe_teleop_core__msg__CollisionWarning__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
void
safe_teleop_core__msg__CollisionWarning__Sequence__destroy(safe_teleop_core__msg__CollisionWarning__Sequence * array);

/// Check for msg/CollisionWarning message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
bool
safe_teleop_core__msg__CollisionWarning__Sequence__are_equal(const safe_teleop_core__msg__CollisionWarning__Sequence * lhs, const safe_teleop_core__msg__CollisionWarning__Sequence * rhs);

/// Copy an array of msg/CollisionWarning messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
bool
safe_teleop_core__msg__CollisionWarning__Sequence__copy(
  const safe_teleop_core__msg__CollisionWarning__Sequence * input,
  safe_teleop_core__msg__CollisionWarning__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__FUNCTIONS_H_
