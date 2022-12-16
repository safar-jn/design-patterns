#include "Logger.h"


Logger::Logger (std::shared_ptr<Storage> storage): _storage(storage)
{}

void Logger::info (const std::string & msg)
{
    // write info log to storage
    _storage->write(std::string("[INFO] ") + msg);
}

void Logger::warn (const std::string & msg)
{
    // write warning log to storage
    _storage->write(std::string("[WARN] ") + msg);
}
