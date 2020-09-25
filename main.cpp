#include "simplefilelogger.hpp"
#include "strategy.hpp"
#include "timedfilelogger.hpp"
#include "strategyconsole.hpp"
#include <fstream>
#include "logger.hpp"

int main()
{
    std::ofstream file1;
    std::ofstream file2;
    file1.open("res1.txt", std::ios::out);
    file2.open("res2.txt", std::ios::out);

    Logger *logger = new Logger(new StrategyConsole());
    logger->set_strategy(new SimpleFileLogger(file1));   
    logger->MetaWriter("HELLO WORLD!");
    logger->set_strategy(new TimedFileLogger(file2));
    logger->MetaWriter("TEXTED WORDS!");



    return 0;
}
