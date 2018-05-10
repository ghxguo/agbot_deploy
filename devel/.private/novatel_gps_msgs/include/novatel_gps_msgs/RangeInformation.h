// Generated by gencpp from file novatel_gps_msgs/RangeInformation.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_RANGEINFORMATION_H
#define NOVATEL_GPS_MSGS_MESSAGE_RANGEINFORMATION_H


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
struct RangeInformation_
{
  typedef RangeInformation_<ContainerAllocator> Type;

  RangeInformation_()
    : prn_number(0)
    , glofreq(0)
    , psr(0.0)
    , psr_std(0.0)
    , adr(0.0)
    , adr_std(0.0)
    , dopp(0.0)
    , noise_density_ratio(0.0)
    , locktime(0.0)
    , tracking_status(0)  {
    }
  RangeInformation_(const ContainerAllocator& _alloc)
    : prn_number(0)
    , glofreq(0)
    , psr(0.0)
    , psr_std(0.0)
    , adr(0.0)
    , adr_std(0.0)
    , dopp(0.0)
    , noise_density_ratio(0.0)
    , locktime(0.0)
    , tracking_status(0)  {
  (void)_alloc;
    }



   typedef uint16_t _prn_number_type;
  _prn_number_type prn_number;

   typedef uint16_t _glofreq_type;
  _glofreq_type glofreq;

   typedef double _psr_type;
  _psr_type psr;

   typedef float _psr_std_type;
  _psr_std_type psr_std;

   typedef double _adr_type;
  _adr_type adr;

   typedef float _adr_std_type;
  _adr_std_type adr_std;

   typedef float _dopp_type;
  _dopp_type dopp;

   typedef float _noise_density_ratio_type;
  _noise_density_ratio_type noise_density_ratio;

   typedef float _locktime_type;
  _locktime_type locktime;

   typedef uint32_t _tracking_status_type;
  _tracking_status_type tracking_status;





  typedef boost::shared_ptr< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> const> ConstPtr;

}; // struct RangeInformation_

typedef ::novatel_gps_msgs::RangeInformation_<std::allocator<void> > RangeInformation;

typedef boost::shared_ptr< ::novatel_gps_msgs::RangeInformation > RangeInformationPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::RangeInformation const> RangeInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/hongxu/agbot_deploy/src/gps/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c29299d245fc707e8f7544af871f110";
  }

  static const char* value(const ::novatel_gps_msgs::RangeInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c29299d245fc707ULL;
  static const uint64_t static_value2 = 0xe8f7544af871f110ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/RangeInformation";
  }

  static const char* value(const ::novatel_gps_msgs::RangeInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Satellite Range information structure used in range messages\n\
\n\
#Satelite PRN number of range measurement\n\
uint16 prn_number\n\
\n\
#GLONASS Frequency\n\
uint16 glofreq\n\
\n\
#Pseudorange measurement(m)\n\
float64 psr\n\
\n\
#Pseudorange measurement standard deviation(m)\n\
float32 psr_std\n\
\n\
#Carrier phase, in cycles\n\
float64 adr\n\
\n\
#Estimated carrier phase standard deviation(cycles)\n\
float32 adr_std\n\
\n\
#Instantaneous carrier Doppler frequency(Hz)\n\
float32 dopp\n\
\n\
#Carrier to noise density ratio\n\
float32 noise_density_ratio\n\
\n\
## of seconds of continous tracking\n\
float32 locktime\n\
\n\
#Tracking status\n\
uint32 tracking_status\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::RangeInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prn_number);
      stream.next(m.glofreq);
      stream.next(m.psr);
      stream.next(m.psr_std);
      stream.next(m.adr);
      stream.next(m.adr_std);
      stream.next(m.dopp);
      stream.next(m.noise_density_ratio);
      stream.next(m.locktime);
      stream.next(m.tracking_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RangeInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::RangeInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::RangeInformation_<ContainerAllocator>& v)
  {
    s << indent << "prn_number: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.prn_number);
    s << indent << "glofreq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.glofreq);
    s << indent << "psr: ";
    Printer<double>::stream(s, indent + "  ", v.psr);
    s << indent << "psr_std: ";
    Printer<float>::stream(s, indent + "  ", v.psr_std);
    s << indent << "adr: ";
    Printer<double>::stream(s, indent + "  ", v.adr);
    s << indent << "adr_std: ";
    Printer<float>::stream(s, indent + "  ", v.adr_std);
    s << indent << "dopp: ";
    Printer<float>::stream(s, indent + "  ", v.dopp);
    s << indent << "noise_density_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.noise_density_ratio);
    s << indent << "locktime: ";
    Printer<float>::stream(s, indent + "  ", v.locktime);
    s << indent << "tracking_status: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tracking_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_RANGEINFORMATION_H
