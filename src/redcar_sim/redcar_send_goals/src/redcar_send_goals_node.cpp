#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <iostream>
using namespace std;

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;
int main(int argc, char** argv){
    ros::init(argc, argv, "redcar_send_goals_node");
    MoveBaseClient ac("move_base", true);
    uint8_t goal_number = 13;

    while(!ac.waitForServer( ros::Duration( 5.0 ) )){
        ROS_INFO("Waiting for the move_base action server to come up");
    }
    move_base_msgs::MoveBaseGoal goal[13];

    // 第一个待发送的 目标点 在 map 坐标系下的坐标位置
    goal[0].target_pose.pose.position.x = 3.02271080017; 
    goal[0].target_pose.pose.position.y =  1.98482334614;
    goal[0].target_pose.pose.orientation.z =  0.511119987767;  
    goal[0].target_pose.pose.orientation.w = 0.859509370574;  

    // 第二个待发送的 目标点 在 map 坐标系下的坐标位置
    goal[1].target_pose.pose.position.x = 2.90045118332;
    goal[1].target_pose.pose.position.y = 4.60118865967;
    goal[1].target_pose.pose.orientation.z = 0.989998781183;  
    goal[1].target_pose.pose.orientation.w = 0.141075913097;  
  
    // 第三个待发送的 目标点 在 map 坐标系下的坐标位置
    goal[2].target_pose.pose.position.x = -0.400571346283;
    goal[2].target_pose.pose.position.y = 4.62564086914;
    goal[2].target_pose.pose.orientation.z = 0.999964100353;  
    goal[2].target_pose.pose.orientation.w = -0.00847337040071;  

    // 第四个待发送的 目标点 在 map 坐标系下的坐标位置
    goal[3].target_pose.pose.position.x = -3.46929979324;
    goal[3].target_pose.pose.position.y = 4.66231918335;
    goal[3].target_pose.pose.orientation.z = 1.0;  
    goal[3].target_pose.pose.orientation.w = -4.37113900019e-08;  

    goal[4].target_pose.pose.position.x = -6.51357555389;
    goal[4].target_pose.pose.position.y = 4.61341524124;
    goal[4].target_pose.pose.orientation.z = 1.0;  
    goal[4].target_pose.pose.orientation.w = -4.37113900019e-08;  

    goal[5].target_pose.pose.position.x = -9.313331604;
    goal[5].target_pose.pose.position.y = 4.58896303177;
    goal[5].target_pose.pose.orientation.z = 1.0;  
    goal[5].target_pose.pose.orientation.w = -4.37113900019e-08;  

    goal[6].target_pose.pose.position.x = -11.7585334778;
    goal[6].target_pose.pose.position.y = 4.60118865967;
    goal[6].target_pose.pose.orientation.z = 0.917147651583;  
    goal[6].target_pose.pose.orientation.w = -0.398547594643;  

    goal[7].target_pose.pose.position.x = -11.8318901062;
    goal[7].target_pose.pose.position.y = 1.80143332481;
    goal[7].target_pose.pose.orientation.z = -0.263698087078;  
    goal[7].target_pose.pose.orientation.w =  0.964605265832;  

    goal[8].target_pose.pose.position.x = -9.39891433716;
    goal[8].target_pose.pose.position.y = 2.10708355904;
    goal[8].target_pose.pose.orientation.z = -0.0628432207454;  
    goal[8].target_pose.pose.orientation.w = 0.998023411352;  

    goal[9].target_pose.pose.position.x = -6.46467208862;
    goal[9].target_pose.pose.position.y = 1.86256313324;
    goal[9].target_pose.pose.orientation.z = -0.0886814620942;  
    goal[9].target_pose.pose.orientation.w = 0.996060037488;  

    goal[10].target_pose.pose.position.x = -3.43262147903;
    goal[10].target_pose.pose.position.y = 1.65472126007;
    goal[10].target_pose.pose.orientation.z = -0.0441742728588;  
    goal[10].target_pose.pose.orientation.w = 0.999023840365;  

    goal[11].target_pose.pose.position.x = -0.498380184174;
    goal[11].target_pose.pose.position.y = 1.60581707954;
    goal[11].target_pose.pose.orientation.z = -0.0341282660501;  
    goal[11].target_pose.pose.orientation.w = 0.999417461052;  

    goal[12].target_pose.pose.position.x = 2.50921821594;
    goal[12].target_pose.pose.position.y = 1.7647550106;
    goal[12].target_pose.pose.orientation.z = 0.0824806716405;  
    goal[12].target_pose.pose.orientation.w = 0.996592664435;  
    
    ROS_INFO(" Init success!!! ");
    while(goal_number )    // total is 4 goals
    {
        switch( (13 - goal_number) ){
            case 0:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 1:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 2:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";   
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 3:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 4:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 5:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 6:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 7:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 8:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 9:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 10:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 11:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            case 12:
                     goal[13 -goal_number].target_pose.header.frame_id = "map";
                     goal[13 -goal_number].target_pose.header.stamp = ros::Time::now();
                     ac.sendGoal(goal[13 -goal_number]);
                     ROS_INFO("Send NO. %d Goal !!!", 13-goal_number );
                break;
            
            default:
                break;
        }
        ac.waitForResult();
        if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
            ROS_INFO("The NO. %d Goal achieved success !!!", 13-goal_number );
            goal_number -- ;
        }else{ROS_WARN("The NO. %d Goal Planning Failed for some reason",13-goal_number); }
    }
  return 0;}
