// Generated by gencpp from file novatel_gps_msgs/Gpgga.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_GPGGA_H
#define NOVATEL_GPS_MSGS_MESSAGE_GPGGA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct Gpgga_
{
  typedef Gpgga_<ContainerAllocator> Type;

  Gpgga_()
    : header()
    , message_id()
    , utc_seconds(0.0)
    , lat(0.0)
    , lon(0.0)
    , lat_dir()
    , lon_dir()
    , gps_qual(0)
    , num_sats(0)
    , hdop(0.0)
    , alt(0.0)
    , altitude_units()
    , undulation(0.0)
    , undulation_units()
    , diff_age(0)
    , station_id()  {
    }
  Gpgga_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , message_id(_alloc)
    , utc_seconds(0.0)
    , lat(0.0)
    , lon(0.0)
    , lat_dir(_alloc)
    , lon_dir(_alloc)
    , gps_qual(0)
    , num_sats(0)
    , hdop(0.0)
    , alt(0.0)
    , altitude_units(_alloc)
    , undulation(0.0)
    , undulation_units(_alloc)
    , diff_age(0)
    , station_id(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_id_type;
  _message_id_type message_id;

   typedef double _utc_seconds_type;
  _utc_seconds_type utc_seconds;

   typedef double _lat_type;
  _lat_type lat;

   typedef double _lon_type;
  _lon_type lon;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lat_dir_type;
  _lat_dir_type lat_dir;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lon_dir_type;
  _lon_dir_type lon_dir;

   typedef uint32_t _gps_qual_type;
  _gps_qual_type gps_qual;

   typedef uint32_t _num_sats_type;
  _num_sats_type num_sats;

   typedef float _hdop_type;
  _hdop_type hdop;

   typedef float _alt_type;
  _alt_type alt;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _altitude_units_type;
  _altitude_units_type altitude_units;

   typedef float _undulation_type;
  _undulation_type undulation;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _undulation_units_type;
  _undulation_units_type undulation_units;

   typedef uint32_t _diff_age_type;
  _diff_age_type diff_age;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _station_id_type;
  _station_id_type station_id;





  typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> const> ConstPtr;

}; // struct Gpgga_

typedef ::novatel_gps_msgs::Gpgga_<std::allocator<void> > Gpgga;

typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgga > GpggaPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgga const> GpggaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::Gpgga_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/agbot/agbot_deploy/src/gps/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8f51cb504898f39d8ad9f698f0b6f9cd";
  }

  static const char* value(const ::novatel_gps_msgs::Gpgga_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8f51cb504898f39dULL;
  static const uint64_t static_value2 = 0x8ad9f698f0b6f9cdULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/Gpgga";
  }

  static const char* value(const ::novatel_gps_msgs::Gpgga_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message from GPGGA NMEA String\n\
Header header\n\
\n\
string message_id\n\
\n\
# UTC seconds from midnight\n\
float64 utc_seconds\n\
\n\
float64 lat\n\
float64 lon\n\
\n\
string lat_dir\n\
string lon_dir\n\
\n\
uint32 gps_qual\n\
\n\
uint32 num_sats\n\
float32 hdop \n\
float32 alt\n\
string altitude_units\n\
\n\
float32 undulation\n\
string undulation_units\n\
uint32 diff_age\n\
string station_id\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::Gpgga_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.message_id);
      stream.next(m.utc_seconds);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.lat_dir);
      stream.next(m.lon_dir);
      stream.next(m.gps_qual);
      stream.next(m.num_sats);
      stream.next(m.hdop);
      stream.next(m.alt);
      stream.next(m.altitude_units);
      stream.next(m.undulation);
      stream.next(m.undulation_units);
      stream.next(m.diff_age);
      stream.next(m.station_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gpgga_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::Gpgga_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::Gpgga_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "message_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message_id);
    s << indent << "utc_seconds: ";
    Printer<double>::stream(s, indent + "  ", v.utc_seconds);
    s << indent << "lat: ";
    Printer<double>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<double>::stream(s, indent + "  ", v.lon);
    s << indent << "lat_dir: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lat_dir);
    s << indent << "lon_dir: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lon_dir);
    s << indent << "gps_qual: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_qual);
    s << indent << "num_sats: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_sats);
    s << indent << "hdop: ";
    Printer<float>::stream(s, indent + "  ", v.hdop);
    s << indent << "alt: ";
    Printer<float>::stream(s, indent + "  ", v.alt);
    s << indent << "altitude_units: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.altitude_units);
    s << indent << "undulation: ";
    Printer<float>::stream(s, indent + "  ", v.undulation);
    s << indent << "undulation_units: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.undulation_units);
    s << indent << "diff_age: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.diff_age);
    s << indent << "station_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.station_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_GPGGA_H
