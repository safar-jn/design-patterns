#include "Logger.h"


void Logger::info (const std::string &msg)
{
    if (!_storage)
        createStorage();

    _storage->write(std::string("[INFO] ") + msg);
}

void Logger::warn (const std::string &msg)
{
    if (!_storage)
        createStorage();

    _storage->write(std::string("[WARN] ") + msg);
}
