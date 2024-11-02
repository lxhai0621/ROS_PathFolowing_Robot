#!/usr/bin/env python3

import rospy
import tf
from geometry_msgs.msg import PoseStamped

class transform_publisher:
    def __init__(self):
        rospy.init_node("transform_publisher")
        rospy.Subscriber("/mycar/center_pose",PoseStamped,self.pose_centerpose,queue_size=1)
        rospy.spin()

    def pose_centerpose(self,data):
        pose = data.pose.position
        orientation = data.pose.orientation
        br = tf.TransformBroadcaster()
        br.sendTransform((pose.x,pose.y,pose.z),(orientation.x,orientation.y,orientation.z,orientation.z),rospy.Time.now(),'base_footprint','world')

        
if __name__ =="__main__":
    try:
        transform_publisher()
    except:
        rospy.logwarn("cannot start transform_publisher")