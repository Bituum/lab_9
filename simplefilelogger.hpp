#pragma once
#include "strategy.hpp"
#include <iostream>

class SimpleFileLogger : public Strategy
{
    private:
        std::ostream &os;
    public:
        SimpleFileLogger(std::ostream &os) : os(os){}
        void write(const std::string &message) override;
};
