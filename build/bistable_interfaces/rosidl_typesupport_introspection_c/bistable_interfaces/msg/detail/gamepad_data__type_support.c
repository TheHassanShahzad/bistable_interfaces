// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bistable_interfaces/msg/detail/gamepad_data__rosidl_typesupport_introspection_c.h"
#include "bistable_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bistable_interfaces/msg/detail/gamepad_data__functions.h"
#include "bistable_interfaces/msg/detail/gamepad_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bistable_interfaces__msg__GamepadData__init(message_memory);
}

void bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_fini_function(void * message_memory)
{
  bistable_interfaces__msg__GamepadData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_member_array[7] = {
  {
    "inclination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, inclination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, yaw_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eq_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, eq_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, kp_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, ki_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, kd_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_toggle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bistable_interfaces__msg__GamepadData, tracking_toggle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_members = {
  "bistable_interfaces__msg",  // message namespace
  "GamepadData",  // message name
  7,  // number of fields
  sizeof(bistable_interfaces__msg__GamepadData),
  bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_member_array,  // message members
  bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_init_function,  // function to initialize message memory (memory has to be allocated)
  bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_type_support_handle = {
  0,
  &bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bistable_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bistable_interfaces, msg, GamepadData)() {
  if (!bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_type_support_handle.typesupport_identifier) {
    bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bistable_interfaces__msg__GamepadData__rosidl_typesupport_introspection_c__GamepadData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
