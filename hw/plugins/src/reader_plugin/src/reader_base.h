#ifndef READER_BASE_H
#define READER_BASE_H
#include <string>

namespace reader_base
{
    class ReaderBase
    {
        public:
            virtual int readFile(std::string path) = 0;
            virtual ~ReaderBase(){}
        protected:
            ReaderBase(){}
    };
};
#endif