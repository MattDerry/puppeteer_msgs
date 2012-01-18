/* Auto-generated by genmsg_cpp for file /home/jarvis/ros/packages/puppeteer_msgs/msg/PointPlus.msg */
#ifndef PUPPETEER_MSGS_MESSAGE_POINTPLUS_H
#define PUPPETEER_MSGS_MESSAGE_POINTPLUS_H
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
struct PointPlus_ {
  typedef PointPlus_<ContainerAllocator> Type;

  PointPlus_()
  : header()
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , error(false)
  {
  }

  PointPlus_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , error(false)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef float _z_type;
  float z;

  typedef uint8_t _error_type;
  uint8_t error;


private:
  static const char* __s_getDataType_() { return "puppeteer_msgs/PointPlus"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "f7fcc93321d502f42d2ed163c509fd8d"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
float32 x\n\
float32 y\n\
float32 z\n\
bool error\n\
\n\
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
    ros::serialization::serialize(stream, x);
    ros::serialization::serialize(stream, y);
    ros::serialization::serialize(stream, z);
    ros::serialization::serialize(stream, error);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, x);
    ros::serialization::deserialize(stream, y);
    ros::serialization::deserialize(stream, z);
    ros::serialization::deserialize(stream, error);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(x);
    size += ros::serialization::serializationLength(y);
    size += ros::serialization::serializationLength(z);
    size += ros::serialization::serializationLength(error);
    return size;
  }

  typedef boost::shared_ptr< ::puppeteer_msgs::PointPlus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::puppeteer_msgs::PointPlus_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PointPlus
typedef  ::puppeteer_msgs::PointPlus_<std::allocator<void> > PointPlus;

typedef boost::shared_ptr< ::puppeteer_msgs::PointPlus> PointPlusPtr;
typedef boost::shared_ptr< ::puppeteer_msgs::PointPlus const> PointPlusConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::puppeteer_msgs::PointPlus_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::puppeteer_msgs::PointPlus_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace puppeteer_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::puppeteer_msgs::PointPlus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::puppeteer_msgs::PointPlus_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::puppeteer_msgs::PointPlus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f7fcc93321d502f42d2ed163c509fd8d";
  }

  static const char* value(const  ::puppeteer_msgs::PointPlus_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf7fcc93321d502f4ULL;
  static const uint64_t static_value2 = 0x2d2ed163c509fd8dULL;
};

template<class ContainerAllocator>
struct DataType< ::puppeteer_msgs::PointPlus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "puppeteer_msgs/PointPlus";
  }

  static const char* value(const  ::puppeteer_msgs::PointPlus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::puppeteer_msgs::PointPlus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32 x\n\
float32 y\n\
float32 z\n\
bool error\n\
\n\
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

  static const char* value(const  ::puppeteer_msgs::PointPlus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::puppeteer_msgs::PointPlus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::puppeteer_msgs::PointPlus_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::puppeteer_msgs::PointPlus_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.error);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PointPlus_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::puppeteer_msgs::PointPlus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::puppeteer_msgs::PointPlus_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PUPPETEER_MSGS_MESSAGE_POINTPLUS_H

