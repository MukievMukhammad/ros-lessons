#include <pluginlib/class_list_macros.h>
#include "reader_base.h"
#include "reader_plugins.h"

PLUGINLIB_EXPORT_CLASS(reader_plugins::FileReader, reader_base::ReaderBase)
