// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_insight_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_insight_msgs/msg/detail/key_point3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_insight_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint3D_score
{
public:
  explicit Init_KeyPoint3D_score(::pallet_insight_msgs::msg::KeyPoint3D & msg)
  : msg_(msg)
  {}
  ::pallet_insight_msgs::msg::KeyPoint3D score(::pallet_insight_msgs::msg::KeyPoint3D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_insight_msgs::msg::KeyPoint3D msg_;
};

class Init_KeyPoint3D_point
{
public:
  explicit Init_KeyPoint3D_point(::pallet_insight_msgs::msg::KeyPoint3D & msg)
  : msg_(msg)
  {}
  Init_KeyPoint3D_score point(::pallet_insight_msgs::msg::KeyPoint3D::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_KeyPoint3D_score(msg_);
  }

private:
  ::pallet_insight_msgs::msg::KeyPoint3D msg_;
};

class Init_KeyPoint3D_id
{
public:
  Init_KeyPoint3D_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint3D_point id(::pallet_insight_msgs::msg::KeyPoint3D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyPoint3D_point(msg_);
  }

private:
  ::pallet_insight_msgs::msg::KeyPoint3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_insight_msgs::msg::KeyPoint3D>()
{
  return pallet_insight_msgs::msg::builder::Init_KeyPoint3D_id();
}

}  // namespace pallet_insight_msgs

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_
