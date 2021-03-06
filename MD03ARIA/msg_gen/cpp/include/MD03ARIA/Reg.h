/* Auto-generated by genmsg_cpp for file /home/kauil/ros_workspace/MD03ARIA/msg/Reg.msg */
#ifndef MD03ARIA_MESSAGE_REG_H
#define MD03ARIA_MESSAGE_REG_H
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


namespace MD03ARIA
{
template <class ContainerAllocator>
struct Reg_ {
  typedef Reg_<ContainerAllocator> Type;

  Reg_()
  : B0_direction(0)
  , B0_speed(0)
  , B2_direction(0)
  , B2_speed(0)
  {
  }

  Reg_(const ContainerAllocator& _alloc)
  : B0_direction(0)
  , B0_speed(0)
  , B2_direction(0)
  , B2_speed(0)
  {
  }

  typedef int64_t _B0_direction_type;
  int64_t B0_direction;

  typedef int64_t _B0_speed_type;
  int64_t B0_speed;

  typedef int64_t _B2_direction_type;
  int64_t B2_direction;

  typedef int64_t _B2_speed_type;
  int64_t B2_speed;


private:
  static const char* __s_getDataType_() { return "MD03ARIA/Reg"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "8aa5d362ecee3cd4ca4534b5a5c89625"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int64 B0_direction\n\
int64 B0_speed\n\
int64 B2_direction\n\
int64 B2_speed\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, B0_direction);
    ros::serialization::serialize(stream, B0_speed);
    ros::serialization::serialize(stream, B2_direction);
    ros::serialization::serialize(stream, B2_speed);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, B0_direction);
    ros::serialization::deserialize(stream, B0_speed);
    ros::serialization::deserialize(stream, B2_direction);
    ros::serialization::deserialize(stream, B2_speed);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(B0_direction);
    size += ros::serialization::serializationLength(B0_speed);
    size += ros::serialization::serializationLength(B2_direction);
    size += ros::serialization::serializationLength(B2_speed);
    return size;
  }

  typedef boost::shared_ptr< ::MD03ARIA::Reg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::MD03ARIA::Reg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Reg
typedef  ::MD03ARIA::Reg_<std::allocator<void> > Reg;

typedef boost::shared_ptr< ::MD03ARIA::Reg> RegPtr;
typedef boost::shared_ptr< ::MD03ARIA::Reg const> RegConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::MD03ARIA::Reg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::MD03ARIA::Reg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace MD03ARIA

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::MD03ARIA::Reg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::MD03ARIA::Reg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::MD03ARIA::Reg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8aa5d362ecee3cd4ca4534b5a5c89625";
  }

  static const char* value(const  ::MD03ARIA::Reg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8aa5d362ecee3cd4ULL;
  static const uint64_t static_value2 = 0xca4534b5a5c89625ULL;
};

template<class ContainerAllocator>
struct DataType< ::MD03ARIA::Reg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "MD03ARIA/Reg";
  }

  static const char* value(const  ::MD03ARIA::Reg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::MD03ARIA::Reg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 B0_direction\n\
int64 B0_speed\n\
int64 B2_direction\n\
int64 B2_speed\n\
\n\
";
  }

  static const char* value(const  ::MD03ARIA::Reg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::MD03ARIA::Reg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::MD03ARIA::Reg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.B0_direction);
    stream.next(m.B0_speed);
    stream.next(m.B2_direction);
    stream.next(m.B2_speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Reg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::MD03ARIA::Reg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::MD03ARIA::Reg_<ContainerAllocator> & v) 
  {
    s << indent << "B0_direction: ";
    Printer<int64_t>::stream(s, indent + "  ", v.B0_direction);
    s << indent << "B0_speed: ";
    Printer<int64_t>::stream(s, indent + "  ", v.B0_speed);
    s << indent << "B2_direction: ";
    Printer<int64_t>::stream(s, indent + "  ", v.B2_direction);
    s << indent << "B2_speed: ";
    Printer<int64_t>::stream(s, indent + "  ", v.B2_speed);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MD03ARIA_MESSAGE_REG_H

