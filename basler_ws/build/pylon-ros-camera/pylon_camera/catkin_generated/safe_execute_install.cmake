execute_process(COMMAND "/home/mukiev/basler_ws/build/pylon-ros-camera/pylon_camera/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/mukiev/basler_ws/build/pylon-ros-camera/pylon_camera/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
