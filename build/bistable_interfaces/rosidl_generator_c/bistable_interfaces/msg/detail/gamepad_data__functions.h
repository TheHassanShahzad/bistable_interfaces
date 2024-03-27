// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__FUNCTIONS_H_
#define BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bistable_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "bistable_interfaces/msg/detail/gamepad_data__struct.h"

/// Initialize msg/GamepadData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bistable_interfaces__msg__GamepadData
 * )) before or use
 * bistable_interfaces__msg__GamepadData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bool
bistable_interfaces__msg__GamepadData__init(bistable_interfaces__msg__GamepadData * msg);

/// Finalize msg/GamepadData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
void
bistable_interfaces__msg__GamepadData__fini(bistable_interfaces__msg__GamepadData * msg);

/// Create msg/GamepadData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bistable_interfaces__msg__GamepadData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bistable_interfaces__msg__GamepadData *
bistable_interfaces__msg__GamepadData__create();

/// Destroy msg/GamepadData message.
/**
 * It calls
 * bistable_interfaces__msg__GamepadData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
void
bistable_interfaces__msg__GamepadData__destroy(bistable_interfaces__msg__GamepadData * msg);

/// Check for msg/GamepadData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bool
bistable_interfaces__msg__GamepadData__are_equal(const bistable_interfaces__msg__GamepadData * lhs, const bistable_interfaces__msg__GamepadData * rhs);

/// Copy a msg/GamepadData message.
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
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bool
bistable_interfaces__msg__GamepadData__copy(
  const bistable_interfaces__msg__GamepadData * input,
  bistable_interfaces__msg__GamepadData * output);

/// Initialize array of msg/GamepadData messages.
/**
 * It allocates the memory for the number of elements and calls
 * bistable_interfaces__msg__GamepadData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bool
bistable_interfaces__msg__GamepadData__Sequence__init(bistable_interfaces__msg__GamepadData__Sequence * array, size_t size);

/// Finalize array of msg/GamepadData messages.
/**
 * It calls
 * bistable_interfaces__msg__GamepadData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
void
bistable_interfaces__msg__GamepadData__Sequence__fini(bistable_interfaces__msg__GamepadData__Sequence * array);

/// Create array of msg/GamepadData messages.
/**
 * It allocates the memory for the array and calls
 * bistable_interfaces__msg__GamepadData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bistable_interfaces__msg__GamepadData__Sequence *
bistable_interfaces__msg__GamepadData__Sequence__create(size_t size);

/// Destroy array of msg/GamepadData messages.
/**
 * It calls
 * bistable_interfaces__msg__GamepadData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
void
bistable_interfaces__msg__GamepadData__Sequence__destroy(bistable_interfaces__msg__GamepadData__Sequence * array);

/// Check for msg/GamepadData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bool
bistable_interfaces__msg__GamepadData__Sequence__are_equal(const bistable_interfaces__msg__GamepadData__Sequence * lhs, const bistable_interfaces__msg__GamepadData__Sequence * rhs);

/// Copy an array of msg/GamepadData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_bistable_interfaces
bool
bistable_interfaces__msg__GamepadData__Sequence__copy(
  const bistable_interfaces__msg__GamepadData__Sequence * input,
  bistable_interfaces__msg__GamepadData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__FUNCTIONS_H_
