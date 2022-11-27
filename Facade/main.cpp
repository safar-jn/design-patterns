#include "src/SimpleConsoleLogger.h"


int main(int argc, char **argv)
{
    SimpleConsoleLogger logger;

    logger.info("hey!");
    logger.warn("hello!");
    logger.err("hi!");
    logger.dbg("aloha!");

    return 0;
}
