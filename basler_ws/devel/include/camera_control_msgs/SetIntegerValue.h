// Generated by gencpp from file camera_control_msgs/SetIntegerValue.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETINTEGERVALUE_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETINTEGERVALUE_H

#include <ros/service_traits.h>


#include <camera_control_msgs/SetIntegerValueRequest.h>
#include <camera_control_msgs/SetIntegerValueResponse.h>


namespace camera_control_msgs
{

struct SetIntegerValue
{

typedef SetIntegerValueRequest Request;
typedef SetIntegerValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetIntegerValue
} // namespace camera_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::camera_control_msgs::SetIntegerValue > {
  static const char* value()
  {
    return "f17b32d87dddbe303f3f462e91a430a4";
  }

  static const char* value(const ::camera_control_msgs::SetIntegerValue&) { return value(); }
};

template<>
struct DataType< ::camera_control_msgs::SetIntegerValue > {
  static const char* value()
  {
    return "camera_control_msgs/SetIntegerValue";
  }

  static const char* value(const ::camera_control_msgs::SetIntegerValue&) { return value(); }
};


// service_traits::MD5Sum< ::camera_control_msgs::SetIntegerValueRequest> should match
// service_traits::MD5Sum< ::camera_control_msgs::SetIntegerValue >
template<>
struct MD5Sum< ::camera_control_msgs::SetIntegerValueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::camera_control_msgs::SetIntegerValue >::value();
  }
  static const char* value(const ::camera_control_msgs::SetIntegerValueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera_control_msgs::SetIntegerValueRequest> should match
// service_traits::DataType< ::camera_control_msgs::SetIntegerValue >
template<>
struct DataType< ::camera_control_msgs::SetIntegerValueRequest>
{
  static const char* value()
  {
    return DataType< ::camera_control_msgs::SetIntegerValue >::value();
  }
  static const char* value(const ::camera_control_msgs::SetIntegerValueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::camera_control_msgs::SetIntegerValueResponse> should match
// service_traits::MD5Sum< ::camera_control_msgs::SetIntegerValue >
template<>
struct MD5Sum< ::camera_control_msgs::SetIntegerValueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::camera_control_msgs::SetIntegerValue >::value();
  }
  static const char* value(const ::camera_control_msgs::SetIntegerValueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera_control_msgs::SetIntegerValueResponse> should match
// service_traits::DataType< ::camera_control_msgs::SetIntegerValue >
template<>
struct DataType< ::camera_control_msgs::SetIntegerValueResponse>
{
  static const char* value()
  {
    return DataType< ::camera_control_msgs::SetIntegerValue >::value();
  }
  static const char* value(const ::camera_control_msgs::SetIntegerValueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETINTEGERVALUE_H
