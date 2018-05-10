#!/usr/bin/env python
#The recipe gives simple implementation of a Discrete Proportional-Integral-Derivative (PID) controller. PID controller gives output value for error between desired reference input and measurement feedback to minimize error value.
#More information: http://en.wikipedia.org/wiki/PID_controller
#
#cnr437@gmail.com
#
#######	Example	#########
#
#p=PID(3.0,0.4,1.2)
#p.setPoint(5.0)
#while True:
#     pid = p.update(measurement_value)
#
#
import rospy
from TCP_command.msg import tcpCommand
from std_msgs.msg import Float32
from std_msgs.msg import Bool
from std_msgs.msg import Int16MultiArray
from std_msgs.msg import String
import PID

global steering
global speed_set
global speed_feedback
global engineCut
global melon_location_x
global melon_location_y
global melon_detected
global object_detected
global melon_state
global melon_indexed
global trailer_state

steering = 0.0
speed_set = 0.0
speed_feedback = 0.0
engineCut = False
melon_location_x = 0
melon_location_y = 0
melon_detected = False
object_detected = "None"
pidBypass = rospy.get_param("/pidBypass")
melon_detection_Bypass = rospy.get_param("/melonBypass")
maxPixel = rospy.get_param("/maxPixel")
Kp_melon = rospy.get_param("/Kp_melon")
melon_state = False
melon_indexed = False
trailer_state = ""

def steeringCallback(data):
    global steering
    steering = data.data
def speedCallback(data):
    global speed_set
    speed_set = data.data
def GPSCallback(data):
    global speed_feedback
    speed_feedback = data.data
def engineCutCallback(data):
    global engineCut
    engineCut = data.data
def watermelon_location_Callback(data):
    global melon_location_x
    global melon_location_y
    melon_location_x = data.data[0]
    melon_location_y = data.data[1]
def melon_detected_Callback(data):
    global melon_detected
    melon_detected = data.data
def objectCallback(data):
    global object_detected
    object_detected = data.data
def trailerCallback(data):
    global trailer_state
    trailer_state = data.data

def speed_control():
    global steering
    global speed_set
    global speed_feedback
    global engineCut
    global melon_location_x
    global melon_location_y
    global melon_detected
    global object_detected
    global melon_state
    global melon_indexed
    global trailer_state
    Kp = 0.2
    Ki = 0.1
    Kd = 3.0
    I_max = 100
    I_min = -100
    accel_max = 1
    rospy.init_node("speed_control", anonymous = True)
    rate = rospy.Rate(20)
    rospy.Subscriber("speed_setpoint", Float32, speedCallback)
    rospy.Subscriber("steering_cmd", Float32, steeringCallback)
    rospy.Subscriber("engine_cut", Bool, engineCutCallback)
    rospy.Subscriber("GPS_speed", Float32, GPSCallback)
    rospy.Subscriber("watermelon_location", Int16MultiArray, watermelon_location_Callback)
    rospy.Subscriber("melon_detected", Bool, melon_detected_Callback)
    rospy.Subscriber("critical_object_detected", String, objectCallback)
    rospy.Subscriber("control_state", String, trailerCallback)
    pub = rospy.Publisher('TCP_cmd', tcpCommand, queue_size = 10)
    msg = tcpCommand()
    p = PID.PID(Ki,Kp,Kd)
    p.setKi(Ki)
    p.setKd(Kd)
    p.setKp(Kp)
    p.setIMax(I_max)
    p.setIMin(I_min)
    while not rospy.is_shutdown():
        steering_melon = 0
        if melon_detected and not melon_indexed:
            melon_state = True
            melon_indexed = True
        if melon_state:
            if melon_location_y < (maxPixel - 50):
                error = melon_location_x - maxPixel/2
                steering_melon = Kp_melon * error
                if steering_melon > 1:
                    steering_melon = 1
                elif steering_melon < -1:
                    steering_melon = -1
            else:
                melon_state = False
        elif melon_indexed:
            if trailer_state == "Testing Ripeness":
                melon_indexed = False
        else:
            steering_melon = steering


        p.setPoint(speed_set)
        pid = p.update(speed_feedback)
        if(pid > 1):
            pid = 1
        elif pid < 0:
            pid = 0

        if engineCut:
            msg.engineCut = True
        else:
            msg.engineCut = False

        if melon_detection_Bypass:
            msg.steering_percent = steering
            if pidBypass:
                msg.pedal_percent = speed_set
            else:
                msg.pedal_percent = pid
        else:
            msg.steering_percent = steering_melon
            if pidBypass:
                msg.pedal_percent = speed_set
            else:
                msg.pedal_percent = pid
        if trailer_state == "Picking up Watermelon":
            msg.pedal_percent = -1 #bypass speed control and stop the car
        if object_detected:
            msg.pedal_percent = -1

        pub.publish(msg)
        rate.sleep()

if __name__ == '__main__':
    speed_control()
