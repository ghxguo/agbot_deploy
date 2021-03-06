// Generated by gencpp from file novatel_gps_msgs/NovatelSignalMask.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_NOVATELSIGNALMASK_H
#define NOVATEL_GPS_MSGS_MESSAGE_NOVATELSIGNALMASK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct NovatelSignalMask_
{
  typedef NovatelSignalMask_<ContainerAllocator> Type;

  NovatelSignalMask_()
    : original_mask(0)
    , gps_L1_used_in_solution(false)
    , gps_L2_used_in_solution(false)
    , gps_L3_used_in_solution(false)
    , glonass_L1_used_in_solution(false)
    , glonass_L2_used_in_solution(false)  {
    }
  NovatelSignalMask_(const ContainerAllocator& _alloc)
    : original_mask(0)
    , gps_L1_used_in_solution(false)
    , gps_L2_used_in_solution(false)
    , gps_L3_used_in_solution(false)
    , glonass_L1_used_in_solution(false)
    , glonass_L2_used_in_solution(false)  {
  (void)_alloc;
    }



   typedef uint32_t _original_mask_type;
  _original_mask_type original_mask;

   typedef uint8_t _gps_L1_used_in_solution_type;
  _gps_L1_used_in_solution_type gps_L1_used_in_solution;

   typedef uint8_t _gps_L2_used_in_solution_type;
  _gps_L2_used_in_solution_type gps_L2_used_in_solution;

   typedef uint8_t _gps_L3_used_in_solution_type;
  _gps_L3_used_in_solution_type gps_L3_used_in_solution;

   typedef uint8_t _glonass_L1_used_in_solution_type;
  _glonass_L1_used_in_solution_type glonass_L1_used_in_solution;

   typedef uint8_t _glonass_L2_used_in_solution_type;
  _glonass_L2_used_in_solution_type glonass_L2_used_in_solution;





  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> const> ConstPtr;

}; // struct NovatelSignalMask_

typedef ::novatel_gps_msgs::NovatelSignalMask_<std::allocator<void> > NovatelSignalMask;

typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelSignalMask > NovatelSignalMaskPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelSignalMask const> NovatelSignalMaskConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/agbot/agbot_deploy/src/gps/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "007d687355f8f3c12ea4e18109172710";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x007d687355f8f3c1ULL;
  static const uint64_t static_value2 = 0x2ea4e18109172710ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/NovatelSignalMask";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Bit    Mask      Description\n\
#  0     0x01      GPS L1 used in Solution\n\
#  1     0x02      GPS L2 used in Solution\n\
#  2     0x04      GPS L5 used in Solution\n\
#  3     0x08      <Reserved>\n\
#  4     0x10      GLONASS L1 used in Solution\n\
#  5     0x20      GLONASS L2 used in Solution\n\
# 6-7  0x40-0x80   <Reserved>\n\
uint32 original_mask\n\
bool gps_L1_used_in_solution\n\
bool gps_L2_used_in_solution\n\
bool gps_L3_used_in_solution\n\
bool glonass_L1_used_in_solution\n\
bool glonass_L2_used_in_solution\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.original_mask);
      stream.next(m.gps_L1_used_in_solution);
      stream.next(m.gps_L2_used_in_solution);
      stream.next(m.gps_L3_used_in_solution);
      stream.next(m.glonass_L1_used_in_solution);
      stream.next(m.glonass_L2_used_in_solution);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NovatelSignalMask_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator>& v)
  {
    s << indent << "original_mask: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.original_mask);
    s << indent << "gps_L1_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_L1_used_in_solution);
    s << indent << "gps_L2_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_L2_used_in_solution);
    s << indent << "gps_L3_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_L3_used_in_solution);
    s << indent << "glonass_L1_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.glonass_L1_used_in_solution);
    s << indent << "glonass_L2_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.glonass_L2_used_in_solution);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_NOVATELSIGNALMASK_H
