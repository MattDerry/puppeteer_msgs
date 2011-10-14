/* Auto-generated by genmsg_cpp for file /home/jarvis/ros/packages/puppeteer_msgs/msg/State.msg */
#ifndef PUPPETEER_MSGS_MESSAGE_STATE_H
#define PUPPETEER_MSGS_MESSAGE_STATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace puppeteer_msgs
{
template <class ContainerAllocator>
struct State_ {
  typedef State_<ContainerAllocator> Type;

  State_()
  : header()
  , xm(0.0)
  , ym(0.0)
  , xc(0.0)
  , r(0.0)
  , xm_dot(0.0)
  , ym_dot(0.0)
  , xc_dot(0.0)
  , r_dot(0.0)
  {
  }

  State_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , xm(0.0)
  , ym(0.0)
  , xc(0.0)
  , r(0.0)
  , xm_dot(0.0)
  , ym_dot(0.0)
  , xc_dot(0.0)
  , r_dot(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _xm_type;
  float xm;

  typedef float _ym_type;
  float ym;

  typedef float _xc_type;
  float xc;

  typedef float _r_type;
  float r;

  typedef float _xm_dot_type;
  float xm_dot;

  typedef float _ym_dot_type;
  float ym_dot;

  typedef float _xc_dot_type;
  float xc_dot;

  typedef float _r_dot_type;
  float r_dot;


private:
  static const char* __s_getDataType_() { return "puppeteer_msgs/State"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "ee486f64bea9f934cf5aaaa8a25f4545"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
float32 xm\n\
float32 ym\n\
float32 xc\n\
float32 r\n\
float32 xm_dot\n\
float32 ym_dot\n\
float32 xc_dot\n\
float32 r_dot\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, xm);
    ros::serialization::serialize(stream, ym);
    ros::serialization::serialize(stream, xc);
    ros::serialization::serialize(stream, r);
    ros::serialization::serialize(stream, xm_dot);
    ros::serialization::serialize(stream, ym_dot);
    ros::serialization::serialize(stream, xc_dot);
    ros::serialization::serialize(stream, r_dot);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, xm);
    ros::serialization::deserialize(stream, ym);
    ros::serialization::deserialize(stream, xc);
    ros::serialization::deserialize(stream, r);
    ros::serialization::deserialize(stream, xm_dot);
    ros::serialization::deserialize(stream, ym_dot);
    ros::serialization::deserialize(stream, xc_dot);
    ros::serialization::deserialize(stream, r_dot);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(xm);
    size += ros::serialization::serializationLength(ym);
    size += ros::serialization::serializationLength(xc);
    size += ros::serialization::serializationLength(r);
    size += ros::serialization::serializationLength(xm_dot);
    size += ros::serialization::serializationLength(ym_dot);
    size += ros::serialization::serializationLength(xc_dot);
    size += ros::serialization::serializationLength(r_dot);
    return size;
  }

  typedef boost::shared_ptr< ::puppeteer_msgs::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::puppeteer_msgs::State_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct State
typedef  ::puppeteer_msgs::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::puppeteer_msgs::State> StatePtr;
typedef boost::shared_ptr< ::puppeteer_msgs::State const> StateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::puppeteer_msgs::State_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::puppeteer_msgs::State_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace puppeteer_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::puppeteer_msgs::State_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::puppeteer_msgs::State_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::puppeteer_msgs::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ee486f64bea9f934cf5aaaa8a25f4545";
  }

  static const char* value(const  ::puppeteer_msgs::State_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xee486f64bea9f934ULL;
  static const uint64_t static_value2 = 0xcf5aaaa8a25f4545ULL;
};

template<class ContainerAllocator>
struct DataType< ::puppeteer_msgs::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "puppeteer_msgs/State";
  }

  static const char* value(const  ::puppeteer_msgs::State_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::puppeteer_msgs::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32 xm\n\
float32 ym\n\
float32 xc\n\
float32 r\n\
float32 xm_dot\n\
float32 ym_dot\n\
float32 xc_dot\n\
float32 r_dot\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::puppeteer_msgs::State_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::puppeteer_msgs::State_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::puppeteer_msgs::State_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::puppeteer_msgs::State_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.xm);
    stream.next(m.ym);
    stream.next(m.xc);
    stream.next(m.r);
    stream.next(m.xm_dot);
    stream.next(m.ym_dot);
    stream.next(m.xc_dot);
    stream.next(m.r_dot);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct State_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::puppeteer_msgs::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::puppeteer_msgs::State_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "xm: ";
    Printer<float>::stream(s, indent + "  ", v.xm);
    s << indent << "ym: ";
    Printer<float>::stream(s, indent + "  ", v.ym);
    s << indent << "xc: ";
    Printer<float>::stream(s, indent + "  ", v.xc);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
    s << indent << "xm_dot: ";
    Printer<float>::stream(s, indent + "  ", v.xm_dot);
    s << indent << "ym_dot: ";
    Printer<float>::stream(s, indent + "  ", v.ym_dot);
    s << indent << "xc_dot: ";
    Printer<float>::stream(s, indent + "  ", v.xc_dot);
    s << indent << "r_dot: ";
    Printer<float>::stream(s, indent + "  ", v.r_dot);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PUPPETEER_MSGS_MESSAGE_STATE_H

