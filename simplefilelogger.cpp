#include "simplefilelogger.hpp"

void SimpleFileLogger::write(const std::string &message)
{
       os <<  message;
}


