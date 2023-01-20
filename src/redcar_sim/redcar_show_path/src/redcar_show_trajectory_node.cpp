#include<ros/ros.h>
#include<string>
#include<iostream>
#include<nav_msgs/Odometry.h>
#include<nav_msgs/Path.h>
#include<geometry_msgs/Pose.h>
#include<geometry_msgs/PoseStamped.h>
 
double ix, iy, px, py;
 
void poseCallback(const nav_msgs::Odometry &p_msg){
    px = p_msg.pose.pose.position.x;
    py = p_msg.pose.pose.position.y;
}
 
int main(int argc,char** argv){
 
    ros::init(argc, argv, "redcar_show_trajectory_node");
    ros::NodeHandle nh;
    ros::Publisher path_pub = nh.advertise<nav_msgs::Path>("/trajectory", 1, true);
    ros::Subscriber pose_sub = nh.subscribe("/odom", 10, poseCallback);
    bool is_start = true;
    nav_msgs::Path path;
    while(ros::ok()){
        ros::spinOnce();
        if(is_start){
            ix = px;
            iy = py;
            is_start = false;
        }
 
        //打印运动轨迹
        
        path.header.stamp = ros::Time::now();
        path.header.frame_id = "/odom";
        
        geometry_msgs::PoseStamped this_pose_stamped;
        this_pose_stamped.pose.position.x = px-ix;
        this_pose_stamped.pose.position.y = py-iy;
        
        this_pose_stamped.pose.orientation.x = 0;
        this_pose_stamped.pose.orientation.y = 0;
        this_pose_stamped.pose.orientation.z = 0;
        this_pose_stamped.pose.orientation.w = 1;
        this_pose_stamped.header.stamp = ros::Time::now();
        this_pose_stamped.header.frame_id = "/odom";
 
        path.poses.push_back(this_pose_stamped);
        path_pub.publish(path);
 
    }
 
    return 0;
}
