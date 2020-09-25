#pragma once
#include <string>


class Strategy
{
    protected:
        Strategy() = default;
    public:
        virtual ~Strategy() = default;
        virtual void write(const std::string &message) = 0;
};



