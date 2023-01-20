# ROS1仿真

## 环境

ubuntu 18.04 + ROS Melodic

## 配置

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
# 打开上面两个文件，添加下列代码
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )
```

Step 3：

```bash
redcar_ws/src/redcar_sim/redcar_gazebo/map/map.yaml
# 这个文件第一行路径更改成你自己的名字
```

## 运行
```bash
roslaunch redcar_gazebo redcar_gmapping_nav.launch
```
还有其他功能，此处不一一举例
