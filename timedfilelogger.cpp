#include "timedfilelogger.hpp"
#include <ctime>


void TimedFileLogger::write(const std::string &message)
{
    char *tmptime;
    time_t current_time = time(NULL);
    if(current_time != (time_t)(-1))
    {
        tmptime = asctime(gmtime(&current_time));
    }
    os << tmptime << std::endl << message;
}
