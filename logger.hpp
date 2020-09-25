#pragma once
#include "strategy.hpp"

class Logger
{
    private:
        Strategy *strategy_;
    public:

        Logger(Strategy *strategy = nullptr) :strategy_(strategy)
        {

        }

        ~Logger()
        {
            delete this->strategy_;
        }

        void set_strategy(Strategy *strategy)
        {
            delete this->strategy_;
            this->strategy_ = strategy;
        }
        
        void MetaWriter(const std::string &call)
        {
            this->strategy_->write(call);
        }
};

