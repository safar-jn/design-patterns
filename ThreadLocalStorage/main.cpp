#include "src/Logger.h"

#include <thread>
#include <iostream>


Logger logger; // static global logger (but with TLS buffer)


void thrFunc (int id)
{
    /// simulate some logging in different thread with dumping the logs at the end

    for (int i = 0; i < (rand() % 10); i++)
    {
        int type = (rand() % 100);
        std::string msg = "msg from thread#" + std::to_string(id);

        if (type < 33)
            logger.info(msg);
        else if (type > 66)
            logger.warn(msg);
        else
            logger.err(msg);
    }

    // ---

    std::cout << (logger.dump() + "---\n");
}


int main (int argc, char **argv)
{
    logger.config("[INFO] | ", "[WARN] | ", "[ERR] | "); // common config for all threads

    std::thread t1(thrFunc, 1);
    std::thread t2(thrFunc, 2);
    std::thread t3(thrFunc, 3);
    std::thread t4(thrFunc, 4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}