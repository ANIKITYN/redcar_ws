#include "ros/ros.h"
#include "std_msgs/String.h"
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/PoseStamped.h>
 
#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
 
 
void waypointCallback(const geometry_msgs::PointStampedConstPtr& waypoint)
{
  //成功接收到了点的坐标信息
  ROS_INFO("pose show start!");
  ROS_INFO("pose is %f", waypoint->header.stamp.toSec());
  ROS_INFO("pose is %f", waypoint->point.x);
  ROS_INFO("pose is %f", waypoint->point.y);
  ROS_INFO("pose is %f", waypoint->point.z);
  
  
}
 
int main(int argc, char** argv)
{
    ros::init(argc,argv,"redcar_publish_points_node");
    ros::NodeHandle nh;
    ros::Subscriber waypoint_sub_ = nh.subscribe("/clicked_point", 100, waypointCallback);
    ros::spin();
    return 0;
   
}
