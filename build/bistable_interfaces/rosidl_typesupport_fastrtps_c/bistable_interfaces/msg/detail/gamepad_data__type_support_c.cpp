// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice
#include "bistable_interfaces/msg/detail/gamepad_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "bistable_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bistable_interfaces/msg/detail/gamepad_data__struct.h"
#include "bistable_interfaces/msg/detail/gamepad_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GamepadData__ros_msg_type = bistable_interfaces__msg__GamepadData;

static bool _GamepadData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GamepadData__ros_msg_type * ros_message = static_cast<const _GamepadData__ros_msg_type *>(untyped_ros_message);
  // Field name: inclination
  {
    cdr << ros_message->inclination;
  }

  // Field name: yaw_vel
  {
    cdr << ros_message->yaw_vel;
  }

  // Field name: eq_change
  {
    cdr << ros_message->eq_change;
  }

  // Field name: kp_change
  {
    cdr << ros_message->kp_change;
  }

  // Field name: ki_change
  {
    cdr << ros_message->ki_change;
  }

  // Field name: kd_change
  {
    cdr << ros_message->kd_change;
  }

  // Field name: tracking_toggle
  {
    cdr << (ros_message->tracking_toggle ? true : false);
  }

  return true;
}

static bool _GamepadData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GamepadData__ros_msg_type * ros_message = static_cast<_GamepadData__ros_msg_type *>(untyped_ros_message);
  // Field name: inclination
  {
    cdr >> ros_message->inclination;
  }

  // Field name: yaw_vel
  {
    cdr >> ros_message->yaw_vel;
  }

  // Field name: eq_change
  {
    cdr >> ros_message->eq_change;
  }

  // Field name: kp_change
  {
    cdr >> ros_message->kp_change;
  }

  // Field name: ki_change
  {
    cdr >> ros_message->ki_change;
  }

  // Field name: kd_change
  {
    cdr >> ros_message->kd_change;
  }

  // Field name: tracking_toggle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tracking_toggle = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bistable_interfaces
size_t get_serialized_size_bistable_interfaces__msg__GamepadData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GamepadData__ros_msg_type * ros_message = static_cast<const _GamepadData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name inclination
  {
    size_t item_size = sizeof(ros_message->inclination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_vel
  {
    size_t item_size = sizeof(ros_message->yaw_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eq_change
  {
    size_t item_size = sizeof(ros_message->eq_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kp_change
  {
    size_t item_size = sizeof(ros_message->kp_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ki_change
  {
    size_t item_size = sizeof(ros_message->ki_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd_change
  {
    size_t item_size = sizeof(ros_message->kd_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracking_toggle
  {
    size_t item_size = sizeof(ros_message->tracking_toggle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GamepadData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bistable_interfaces__msg__GamepadData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bistable_interfaces
size_t max_serialized_size_bistable_interfaces__msg__GamepadData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: inclination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eq_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kp_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ki_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kd_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tracking_toggle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bistable_interfaces__msg__GamepadData;
    is_plain =
      (
      offsetof(DataType, tracking_toggle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GamepadData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bistable_interfaces__msg__GamepadData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GamepadData = {
  "bistable_interfaces::msg",
  "GamepadData",
  _GamepadData__cdr_serialize,
  _GamepadData__cdr_deserialize,
  _GamepadData__get_serialized_size,
  _GamepadData__max_serialized_size
};

static rosidl_message_type_support_t _GamepadData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GamepadData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bistable_interfaces, msg, GamepadData)() {
  return &_GamepadData__type_support;
}

#if defined(__cplusplus)
}
#endif
