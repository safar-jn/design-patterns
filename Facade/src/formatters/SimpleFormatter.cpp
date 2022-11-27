#include "SimpleFormatter.h"


std::string SimpleFormatter::format (const std::string & msg)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");

    return oss.str() + " | " + msg;
}
