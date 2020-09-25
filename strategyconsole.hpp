#pragma once
#include "strategy.hpp"

class StrategyConsole : public Strategy
{
    public:
        void write(const std::string &message) override;
        virtual ~StrategyConsole() = default;
        StrategyConsole() = default;
};
