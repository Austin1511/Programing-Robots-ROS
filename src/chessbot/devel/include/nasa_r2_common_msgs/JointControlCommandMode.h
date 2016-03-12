// Generated by gencpp from file nasa_r2_common_msgs/JointControlCommandMode.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLCOMMANDMODE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLCOMMANDMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct JointControlCommandMode_
{
  typedef JointControlCommandMode_<ContainerAllocator> Type;

  JointControlCommandMode_()
    : state(0)  {
    }
  JointControlCommandMode_(const ContainerAllocator& _alloc)
    : state(0)  {
    }



   typedef uint8_t _state_type;
  _state_type state;


    enum { IGNORE = 0u };
     enum { INVALID = 1u };
     enum { MOTCOM = 2u };
     enum { MULTILOOPSTEP = 3u };
     enum { MULTILOOPSMOOTH = 4u };
     enum { ACTUATOR = 5u };
     enum { STALLMODE = 6u };
 

  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> const> ConstPtr;

}; // struct JointControlCommandMode_

typedef ::nasa_r2_common_msgs::JointControlCommandMode_<std::allocator<void> > JointControlCommandMode;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlCommandMode > JointControlCommandModePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlCommandMode const> JointControlCommandModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/mkhuthir/learnROS/src/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9c51a2c2167cabb38ab513659b6ab0a";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9c51a2c2167cabbULL;
  static const uint64_t static_value2 = 0x38ab513659b6ab0aULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointControlCommandMode";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 state\n\
uint8 IGNORE          = 0\n\
uint8 INVALID         = 1\n\
uint8 MOTCOM          = 2\n\
uint8 MULTILOOPSTEP   = 3\n\
uint8 MULTILOOPSMOOTH = 4\n\
uint8 ACTUATOR        = 5\n\
uint8 STALLMODE       = 6\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct JointControlCommandMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointControlCommandMode_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLCOMMANDMODE_H
