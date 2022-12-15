#include "src/logger/Logger.h"
#include "src/logger/FileLogger.h"
#include "src/logger/ConsoleLogger.h"

#include <memory>


void simulateClient (std::shared_ptr<Logger> logger)
{
    // simulate client code that uses Logger object (which use Factor Method for getting correct Storage object)

    logger->info("hey");
    // ...
}


int main(int argc, char **argv)
{
    simulateClient(std::make_shared<ConsoleLogger>()); // client is not bound by concrete type - here it logs to console
    simulateClient(std::make_shared<FileLogger>()); // client is not bound by concrete type - here it logs to file
    return 0;
}
