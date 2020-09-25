#pragma once
#include <iostream>
#include <ostream>
#include "strategy.hpp"

class TimedFileLogger : public Strategy
{
    private:
        std::ostream &os;
    public:
       TimedFileLogger(std::ostream &os) : os(os){}
       void write(const std::string &message) override;
       
};
