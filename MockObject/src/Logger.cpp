#include "Logger.h"


Logger::Logger (std::shared_ptr<Storage> storage): _storage(storage)
{}

void Logger::info (const std::string & msg)
{
    _storage->write(std::string("[INFO] ") + msg);
}

void Logger::warn (const std::string & msg)
{
    _storage->write(std::string("[WARN] ") + msg);
}
