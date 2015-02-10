 ROCO - A C++ library that provides a common interface for robot controllers
----------------------------------------------------------------------------
Test 3

Author(s): Christian Gehring
Date: Dec. 2014

Software License Agreement: BSD License

[![Build Status](http://129.132.38.183:8080/buildStatus/icon?job=roco)](http://129.132.38.183:8080/job/roco/)

INSTALLATION
------------

## Dependencies
* [Catkin](https://github.com/ros/catkin)

To install [Catkin](https://github.com/ros/catkin), follow the installation of [ROS](http://wiki.ros.org/indigo/Installation/Ubuntu). But instead of installing all ros packages, install only **ros-indigo-catkin**.
You need to change the environment of your current shell. You can type:


```
#!bash

source /opt/ros/indigo/setup.bash
```


## Building

### Cmake
```
#!bash

mkdir build
cd build
cmake ..
make
sudo make install
```

### Build Example

```
#!bash

mkdir build
cd build
cmake .. -DBUILD_EXAMPLE=ON
make
./../bin/example
```
