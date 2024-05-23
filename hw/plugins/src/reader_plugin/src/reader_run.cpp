#include <pluginlib/class_loader.h>
#include "reader_base.h"

int main(int argc, char** argv)
{
  pluginlib::ClassLoader<reader_base::ReaderBase> reader_loader("reader_plugin", "reader_base::ReaderBase");

  try
  {
    boost::shared_ptr<reader_base::ReaderBase> reader = reader_loader.createInstance("reader_plugins::FileReader");
    int count = reader->readFile("/home/mukiev/catkin_ws/hw/plugins/src/reader_plugin/src/test.txt");

    ROS_INFO("File's char count: %i", count);
  }
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
  }

  return 0;
}