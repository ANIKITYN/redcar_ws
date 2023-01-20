# ROS1 Simulation



## Environment

ubuntu 18.04 + ROS Melodic desktop full 

## configuration

Step 1：

```bash
sudo apt install ros-melodic-robot-state-publisher
sudo apt install ros-melodic-joint-state-publisher
sudo apt install ros-melodic-rviz-imu-plugin
sudo apt install ros-melodic-map-server
sudo apt install ros-melodic-gmapping
```

Step 2：

```bash
sudo gedit /usr/lib/python2.7/xml/etree/ElementTree.py
sudo gedit /opt/ros/melodic/lib/python2.7/dist-packages/joint_state_publisher/__init__.py
# Open the above two files and add the following code
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )
```

Step 3：

```bash
redcar_ws/src/redcar_sim/redcar_gazebo/map/map.yaml
# Change the path of the first line of this file to your own name
```



