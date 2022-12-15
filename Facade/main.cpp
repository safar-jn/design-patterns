#include "src/SimpleConsoleLogger.h"


void simulateClient ()
{
    // simulate client code that takes advantage of Facade object for ease of use

    SimpleConsoleLogger logger;

    logger.info("hey!");
    logger.warn("hello!");
    logger.err("hi!");
    logger.dbg("aloha!");
}

int main(int argc, char **argv)
{
    simulateClient();
    return 0;
}
