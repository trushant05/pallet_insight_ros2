// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_insight_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__TRAITS_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_insight_msgs/msg/detail/key_point3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace pallet_insight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyPoint3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyPoint3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyPoint3D & msg, bool use_flow_style = false)
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
  const pallet_insight_msgs::msg::KeyPoint3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_insight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_insight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_insight_msgs::msg::KeyPoint3D & msg)
{
  return pallet_insight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_insight_msgs::msg::KeyPoint3D>()
{
  return "pallet_insight_msgs::msg::KeyPoint3D";
}

template<>
inline const char * name<pallet_insight_msgs::msg::KeyPoint3D>()
{
  return "pallet_insight_msgs/msg/KeyPoint3D";
}

template<>
struct has_fixed_size<pallet_insight_msgs::msg::KeyPoint3D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<pallet_insight_msgs::msg::KeyPoint3D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<pallet_insight_msgs::msg::KeyPoint3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__TRAITS_HPP_
