// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__TRAITS_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bistable_interfaces/msg/detail/gamepad_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bistable_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GamepadData & msg,
  std::ostream & out)
{
  out << "{";
  // member: inclination
  {
    out << "inclination: ";
    rosidl_generator_traits::value_to_yaml(msg.inclination, out);
    out << ", ";
  }

  // member: yaw_vel
  {
    out << "yaw_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_vel, out);
    out << ", ";
  }

  // member: eq_change
  {
    out << "eq_change: ";
    rosidl_generator_traits::value_to_yaml(msg.eq_change, out);
    out << ", ";
  }

  // member: kp_change
  {
    out << "kp_change: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_change, out);
    out << ", ";
  }

  // member: ki_change
  {
    out << "ki_change: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_change, out);
    out << ", ";
  }

  // member: kd_change
  {
    out << "kd_change: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_change, out);
    out << ", ";
  }

  // member: tracking_toggle
  {
    out << "tracking_toggle: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_toggle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GamepadData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inclination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inclination: ";
    rosidl_generator_traits::value_to_yaml(msg.inclination, out);
    out << "\n";
  }

  // member: yaw_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_vel, out);
    out << "\n";
  }

  // member: eq_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eq_change: ";
    rosidl_generator_traits::value_to_yaml(msg.eq_change, out);
    out << "\n";
  }

  // member: kp_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_change: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_change, out);
    out << "\n";
  }

  // member: ki_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki_change: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_change, out);
    out << "\n";
  }

  // member: kd_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd_change: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_change, out);
    out << "\n";
  }

  // member: tracking_toggle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_toggle: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_toggle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GamepadData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bistable_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bistable_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bistable_interfaces::msg::GamepadData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bistable_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bistable_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const bistable_interfaces::msg::GamepadData & msg)
{
  return bistable_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bistable_interfaces::msg::GamepadData>()
{
  return "bistable_interfaces::msg::GamepadData";
}

template<>
inline const char * name<bistable_interfaces::msg::GamepadData>()
{
  return "bistable_interfaces/msg/GamepadData";
}

template<>
struct has_fixed_size<bistable_interfaces::msg::GamepadData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bistable_interfaces::msg::GamepadData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bistable_interfaces::msg::GamepadData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__TRAITS_HPP_
