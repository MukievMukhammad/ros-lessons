#ifndef READER_PLUGINS_H
#define READER_BASE_H
#include "reader_base.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace reader_plugins
{
    class FileReader : public reader_base::ReaderBase
    {
        int readFile(std::string path)
        {
            string line;
            ifstream inMyStream(path); 
            int c;

            if (inMyStream.is_open()) 
            {
                while( getline ( inMyStream, line ) )
                    c += line.length();
            }
            inMyStream.close(); 

            return c;
        }
    };
};
#endif