// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_insight_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__TRAITS_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_insight_msgs/msg/detail/vector2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pallet_insight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vector2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vector2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vector2 & msg, bool use_flow_style = false)
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

}  // namespace pallet_insight_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pallet_insight_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pallet_insight_msgs::msg::Vector2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_insight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_insight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_insight_msgs::msg::Vector2 & msg)
{
  return pallet_insight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_insight_msgs::msg::Vector2>()
{
  return "pallet_insight_msgs::msg::Vector2";
}

template<>
inline const char * name<pallet_insight_msgs::msg::Vector2>()
{
  return "pallet_insight_msgs/msg/Vector2";
}

template<>
struct has_fixed_size<pallet_insight_msgs::msg::Vector2>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pallet_insight_msgs::msg::Vector2>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pallet_insight_msgs::msg::Vector2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__TRAITS_HPP_
