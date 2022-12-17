#include "Logger.h"


void Logger::config (std::string infoPrefix, std::string warnPrefix, std::string errPrefix)
{
    // simulate some logger configuration
    _infoPrefix = std::move(infoPrefix);
    _warnPrefix = std::move(warnPrefix);
    _errPrefix = std::move(errPrefix);
}

void Logger::info (const std::string &msg)
{
    Buffer::INSTANCE.insert(_infoPrefix + msg);
}

void Logger::warn (const std::string &msg)
{
    Buffer::INSTANCE.insert(_warnPrefix + msg);
}

void Logger::err (const std::string &msg)
{
    Buffer::INSTANCE.insert(_errPrefix + msg);
}

std::string Logger::dump ()
{
    return Buffer::INSTANCE.stringify();
}
