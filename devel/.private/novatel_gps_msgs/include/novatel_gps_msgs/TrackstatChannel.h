// Generated by gencpp from file novatel_gps_msgs/TrackstatChannel.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_TRACKSTATCHANNEL_H
#define NOVATEL_GPS_MSGS_MESSAGE_TRACKSTATCHANNEL_H


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
struct TrackstatChannel_
{
  typedef TrackstatChannel_<ContainerAllocator> Type;

  TrackstatChannel_()
    : prn(0)
    , glofreq(0)
    , ch_tr_status(0)
    , psr(0.0)
    , doppler(0.0)
    , c_no(0.0)
    , locktime(0.0)
    , psr_res(0.0)
    , reject()
    , psr_weight(0.0)  {
    }
  TrackstatChannel_(const ContainerAllocator& _alloc)
    : prn(0)
    , glofreq(0)
    , ch_tr_status(0)
    , psr(0.0)
    , doppler(0.0)
    , c_no(0.0)
    , locktime(0.0)
    , psr_res(0.0)
    , reject(_alloc)
    , psr_weight(0.0)  {
  (void)_alloc;
    }



   typedef int16_t _prn_type;
  _prn_type prn;

   typedef int16_t _glofreq_type;
  _glofreq_type glofreq;

   typedef uint32_t _ch_tr_status_type;
  _ch_tr_status_type ch_tr_status;

   typedef double _psr_type;
  _psr_type psr;

   typedef float _doppler_type;
  _doppler_type doppler;

   typedef float _c_no_type;
  _c_no_type c_no;

   typedef float _locktime_type;
  _locktime_type locktime;

   typedef float _psr_res_type;
  _psr_res_type psr_res;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reject_type;
  _reject_type reject;

   typedef float _psr_weight_type;
  _psr_weight_type psr_weight;





  typedef boost::shared_ptr< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> const> ConstPtr;

}; // struct TrackstatChannel_

typedef ::novatel_gps_msgs::TrackstatChannel_<std::allocator<void> > TrackstatChannel;

typedef boost::shared_ptr< ::novatel_gps_msgs::TrackstatChannel > TrackstatChannelPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::TrackstatChannel const> TrackstatChannelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/hongxu/agbot_deploy/src/gps/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "295831118c5ddfb83ac5b655586ae7ef";
  }

  static const char* value(const ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x295831118c5ddfb8ULL;
  static const uint64_t static_value2 = 0x3ac5b655586ae7efULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/TrackstatChannel";
  }

  static const char* value(const ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A submessage of Trackstat that contains all of the data about a single hardware channel\n\
\n\
# Satellite PRN number\n\
int16 prn\n\
\n\
# GLONASS Frequency +7\n\
int16 glofreq\n\
\n\
# Channel tracking status\n\
uint32 ch_tr_status\n\
\n\
# Pseudorange (m)\n\
float64 psr\n\
\n\
# Doppler frequency (Hz)\n\
float32 doppler\n\
\n\
# Carrier to noise density ratio (dB-Hz)\n\
float32 c_no\n\
\n\
# Number of seconds of continuous tracking (no cycle slips)\n\
float32 locktime\n\
\n\
# Pseudorange residual from pseudorange filter (m)\n\
float32 psr_res\n\
\n\
# Range reject code from pseudorange filter\n\
string reject\n\
\n\
# Pseudorange filter weighting\n\
float32 psr_weight\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prn);
      stream.next(m.glofreq);
      stream.next(m.ch_tr_status);
      stream.next(m.psr);
      stream.next(m.doppler);
      stream.next(m.c_no);
      stream.next(m.locktime);
      stream.next(m.psr_res);
      stream.next(m.reject);
      stream.next(m.psr_weight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackstatChannel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::TrackstatChannel_<ContainerAllocator>& v)
  {
    s << indent << "prn: ";
    Printer<int16_t>::stream(s, indent + "  ", v.prn);
    s << indent << "glofreq: ";
    Printer<int16_t>::stream(s, indent + "  ", v.glofreq);
    s << indent << "ch_tr_status: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ch_tr_status);
    s << indent << "psr: ";
    Printer<double>::stream(s, indent + "  ", v.psr);
    s << indent << "doppler: ";
    Printer<float>::stream(s, indent + "  ", v.doppler);
    s << indent << "c_no: ";
    Printer<float>::stream(s, indent + "  ", v.c_no);
    s << indent << "locktime: ";
    Printer<float>::stream(s, indent + "  ", v.locktime);
    s << indent << "psr_res: ";
    Printer<float>::stream(s, indent + "  ", v.psr_res);
    s << indent << "reject: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.reject);
    s << indent << "psr_weight: ";
    Printer<float>::stream(s, indent + "  ", v.psr_weight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_TRACKSTATCHANNEL_H
