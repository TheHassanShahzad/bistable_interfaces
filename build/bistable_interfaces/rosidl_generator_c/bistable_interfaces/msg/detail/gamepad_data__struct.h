// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__STRUCT_H_
#define BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GamepadData in the package bistable_interfaces.
typedef struct bistable_interfaces__msg__GamepadData
{
  float inclination;
  float yaw_vel;
  float eq_change;
  float kp_change;
  float ki_change;
  float kd_change;
  bool tracking_toggle;
} bistable_interfaces__msg__GamepadData;

// Struct for a sequence of bistable_interfaces__msg__GamepadData.
typedef struct bistable_interfaces__msg__GamepadData__Sequence
{
  bistable_interfaces__msg__GamepadData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bistable_interfaces__msg__GamepadData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__STRUCT_H_
