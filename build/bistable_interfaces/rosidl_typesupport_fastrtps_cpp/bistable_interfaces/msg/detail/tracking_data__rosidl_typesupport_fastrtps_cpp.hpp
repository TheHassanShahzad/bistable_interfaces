// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bistable_interfaces:msg/TrackingData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bistable_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bistable_interfaces/msg/detail/tracking_data__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace bistable_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
cdr_serialize(
  const bistable_interfaces::msg::TrackingData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bistable_interfaces::msg::TrackingData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
get_serialized_size(
  const bistable_interfaces::msg::TrackingData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
max_serialized_size_TrackingData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bistable_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bistable_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bistable_interfaces, msg, TrackingData)();

#ifdef __cplusplus
}
#endif

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
