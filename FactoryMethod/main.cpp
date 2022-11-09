#include <memory>

#include "src/logger/Logger.h"
#include "src/logger/FileLogger.h"
#include "src/logger/ConsoleLogger.h"


int main(int argc, char **argv)
{
    // example of client code which uses loggers with Factory Method pattern

    std::shared_ptr<Logger> logger;

    logger = std::make_shared<ConsoleLogger>(); // client can freely swap logger types
    logger->info("hey in console");

    logger = std::make_shared<FileLogger>(); // client can freely swap logger types
    logger->info("hey in file");

    return 0;
}
