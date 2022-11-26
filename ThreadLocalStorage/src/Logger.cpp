#include "Logger.h"


void Logger::config (const std::string &infoPrefix, const std::string &warnPrefix, const std::string &errPrefix)
{
    _info_prefix = infoPrefix;
    _warn_prefix = warnPrefix;
    _err_prefix = errPrefix;
}

void Logger::info (const std::string &msg)
{
    Buffer::INSTANCE.insert(_info_prefix + msg);
}

void Logger::warn (const std::string &msg)
{
    Buffer::INSTANCE.insert(_warn_prefix + msg);
}

void Logger::err (const std::string &msg)
{
    Buffer::INSTANCE.insert(_err_prefix + msg);
}

std::string Logger::dump ()
{
    return Buffer::INSTANCE.stringify();
}
