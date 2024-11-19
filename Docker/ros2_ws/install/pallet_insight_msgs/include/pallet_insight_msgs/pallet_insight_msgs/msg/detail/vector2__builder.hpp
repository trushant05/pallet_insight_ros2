// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_insight_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_insight_msgs/msg/detail/vector2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_insight_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector2_y
{
public:
  explicit Init_Vector2_y(::pallet_insight_msgs::msg::Vector2 & msg)
  : msg_(msg)
  {}
  ::pallet_insight_msgs::msg::Vector2 y(::pallet_insight_msgs::msg::Vector2::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Vector2 msg_;
};

class Init_Vector2_x
{
public:
  Init_Vector2_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector2_y x(::pallet_insight_msgs::msg::Vector2::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector2_y(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Vector2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_insight_msgs::msg::Vector2>()
{
  return pallet_insight_msgs::msg::builder::Init_Vector2_x();
}

}  // namespace pallet_insight_msgs

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_
