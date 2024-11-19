// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_insight_msgs:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__TRAITS_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_insight_msgs/msg/detail/key_point3_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "pallet_insight_msgs/msg/detail/key_point3_d__traits.hpp"

namespace pallet_insight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyPoint3DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyPoint3DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyPoint3DArray & msg, bool use_flow_style = false)
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
  const pallet_insight_msgs::msg::KeyPoint3DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_insight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_insight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_insight_msgs::msg::KeyPoint3DArray & msg)
{
  return pallet_insight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_insight_msgs::msg::KeyPoint3DArray>()
{
  return "pallet_insight_msgs::msg::KeyPoint3DArray";
}

template<>
inline const char * name<pallet_insight_msgs::msg::KeyPoint3DArray>()
{
  return "pallet_insight_msgs/msg/KeyPoint3DArray";
}

template<>
struct has_fixed_size<pallet_insight_msgs::msg::KeyPoint3DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pallet_insight_msgs::msg::KeyPoint3DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pallet_insight_msgs::msg::KeyPoint3DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__TRAITS_HPP_
