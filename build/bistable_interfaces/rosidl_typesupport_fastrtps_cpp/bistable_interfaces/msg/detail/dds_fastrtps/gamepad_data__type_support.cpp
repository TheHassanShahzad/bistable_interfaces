// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice
#include "bistable_interfaces/msg/detail/gamepad_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bistable_interfaces/msg/detail/gamepad_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace bistable_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
cdr_serialize(
  const bistable_interfaces::msg::GamepadData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: inclination
  cdr << ros_message.inclination;
  // Member: yaw_vel
  cdr << ros_message.yaw_vel;
  // Member: eq_change
  cdr << ros_message.eq_change;
  // Member: kp_change
  cdr << ros_message.kp_change;
  // Member: ki_change
  cdr << ros_message.ki_change;
  // Member: kd_change
  cdr << ros_message.kd_change;
  // Member: tracking_toggle
  cdr << (ros_message.tracking_toggle ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bistable_interfaces::msg::GamepadData & ros_message)
{
  // Member: inclination
  cdr >> ros_message.inclination;

  // Member: yaw_vel
  cdr >> ros_message.yaw_vel;

  // Member: eq_change
  cdr >> ros_message.eq_change;

  // Member: kp_change
  cdr >> ros_message.kp_change;

  // Member: ki_change
  cdr >> ros_message.ki_change;

  // Member: kd_change
  cdr >> ros_message.kd_change;

  // Member: tracking_toggle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tracking_toggle = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
get_serialized_size(
  const bistable_interfaces::msg::GamepadData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: inclination
  {
    size_t item_size = sizeof(ros_message.inclination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_vel
  {
    size_t item_size = sizeof(ros_message.yaw_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eq_change
  {
    size_t item_size = sizeof(ros_message.eq_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kp_change
  {
    size_t item_size = sizeof(ros_message.kp_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ki_change
  {
    size_t item_size = sizeof(ros_message.ki_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kd_change
  {
    size_t item_size = sizeof(ros_message.kd_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracking_toggle
  {
    size_t item_size = sizeof(ros_message.tracking_toggle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
max_serialized_size_GamepadData(
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


  // Member: inclination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: eq_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: kp_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ki_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: kd_change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tracking_toggle
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
    using DataType = bistable_interfaces::msg::GamepadData;
    is_plain =
      (
      offsetof(DataType, tracking_toggle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GamepadData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bistable_interfaces::msg::GamepadData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GamepadData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bistable_interfaces::msg::GamepadData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GamepadData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bistable_interfaces::msg::GamepadData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GamepadData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GamepadData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GamepadData__callbacks = {
  "bistable_interfaces::msg",
  "GamepadData",
  _GamepadData__cdr_serialize,
  _GamepadData__cdr_deserialize,
  _GamepadData__get_serialized_size,
  _GamepadData__max_serialized_size
};

static rosidl_message_type_support_t _GamepadData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GamepadData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bistable_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bistable_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<bistable_interfaces::msg::GamepadData>()
{
  return &bistable_interfaces::msg::typesupport_fastrtps_cpp::_GamepadData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bistable_interfaces, msg, GamepadData)() {
  return &bistable_interfaces::msg::typesupport_fastrtps_cpp::_GamepadData__handle;
}

#ifdef __cplusplus
}
#endif
