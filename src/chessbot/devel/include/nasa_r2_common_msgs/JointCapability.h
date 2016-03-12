// Generated by gencpp from file nasa_r2_common_msgs/JointCapability.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTCAPABILITY_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTCAPABILITY_H


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
struct JointCapability_
{
  typedef JointCapability_<ContainerAllocator> Type;

  JointCapability_()
    : name()
    , positionLimitMax()
    , positionLimitMin()
    , torqueLimit()  {
    }
  JointCapability_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , positionLimitMax(_alloc)
    , positionLimitMin(_alloc)
    , torqueLimit(_alloc)  {
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _positionLimitMax_type;
  _positionLimitMax_type positionLimitMax;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _positionLimitMin_type;
  _positionLimitMin_type positionLimitMin;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _torqueLimit_type;
  _torqueLimit_type torqueLimit;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> const> ConstPtr;

}; // struct JointCapability_

typedef ::nasa_r2_common_msgs::JointCapability_<std::allocator<void> > JointCapability;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointCapability > JointCapabilityPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointCapability const> JointCapabilityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/mkhuthir/learnROS/src/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "40d391c05ffb602d44b6aec475271b97";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x40d391c05ffb602dULL;
  static const uint64_t static_value2 = 0x44b6aec475271b97ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointCapability";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] name\n\
float64[] positionLimitMax\n\
float64[] positionLimitMin\n\
float64[] torqueLimit\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.positionLimitMax);
      stream.next(m.positionLimitMin);
      stream.next(m.torqueLimit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct JointCapability_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointCapability_<ContainerAllocator>& v)
  {
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "positionLimitMax[]" << std::endl;
    for (size_t i = 0; i < v.positionLimitMax.size(); ++i)
    {
      s << indent << "  positionLimitMax[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.positionLimitMax[i]);
    }
    s << indent << "positionLimitMin[]" << std::endl;
    for (size_t i = 0; i < v.positionLimitMin.size(); ++i)
    {
      s << indent << "  positionLimitMin[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.positionLimitMin[i]);
    }
    s << indent << "torqueLimit[]" << std::endl;
    for (size_t i = 0; i < v.torqueLimit.size(); ++i)
    {
      s << indent << "  torqueLimit[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.torqueLimit[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTCAPABILITY_H
