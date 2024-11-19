// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_insight_msgs:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__BUILDER_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_insight_msgs/msg/detail/key_point3_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_insight_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint3DArray_frame_id
{
public:
  explicit Init_KeyPoint3DArray_frame_id(::pallet_insight_msgs::msg::KeyPoint3DArray & msg)
  : msg_(msg)
  {}
  ::pallet_insight_msgs::msg::KeyPoint3DArray frame_id(::pallet_insight_msgs::msg::KeyPoint3DArray::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_insight_msgs::msg::KeyPoint3DArray msg_;
};

class Init_KeyPoint3DArray_data
{
public:
  Init_KeyPoint3DArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint3DArray_frame_id data(::pallet_insight_msgs::msg::KeyPoint3DArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_KeyPoint3DArray_frame_id(msg_);
  }

private:
  ::pallet_insight_msgs::msg::KeyPoint3DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_insight_msgs::msg::KeyPoint3DArray>()
{
  return pallet_insight_msgs::msg::builder::Init_KeyPoint3DArray_data();
}

}  // namespace pallet_insight_msgs

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__BUILDER_HPP_
