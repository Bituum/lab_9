#include "simplefilelogger.hpp"
#include "strategy.hpp"
#include "timedfilelogger.hpp"
#include "strategyconsole.hpp"
#include <fstream>


int main()
{
    std::ofstream file1;
    std::ofstream file2;
    file1.open("res1.txt", std::ios::out);
    file2.open("res2.txt", std::ios::out);

    Strategy *loggerC = new StrategyConsole();
    loggerC->write("Hello World!");
    Strategy *loggerF = new SimpleFileLogger(file1);
    loggerF->write("Hello");
    Strategy *loggerT = new TimedFileLogger(file2);
    loggerT->write("MAXIM HI");
    
    return 0;
}
