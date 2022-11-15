#include "SimpleConsoleLogger.h"


void SimpleConsoleLogger::info (const std::string &msg) const
{
    log(msg, "\033[34m");
}

void SimpleConsoleLogger::warn (const std::string &msg) const
{
    log(msg, "\033[33m");
}

void SimpleConsoleLogger::dbg (const std::string &msg) const
{
    log(msg, "\033[35m");
}

void SimpleConsoleLogger::err (const std::string &msg) const
{
    log(msg, "\033[31m");
}

void SimpleConsoleLogger::log (const std::string &msg, const std::string &color) const
{
    std::string formatted = _formatter->format(msg);
    std::string colored = color + formatted + "\033[0m";

    _storage->save(colored);
}
