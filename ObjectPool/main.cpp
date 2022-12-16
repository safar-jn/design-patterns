#include <thread>
#include <iostream>

#include "src/ConnectionPool.h"


void threadFunc()
{
    // simulate workload that includes saving data to DWH using one of the opened connections in ConnectionPool

    try
    {
        auto conn = ConnectionPool::getInstance()->acquire(); // borrow connection from the pool

        conn->save("some data");
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));   // simulate some workload

        ConnectionPool::getInstance()->release(conn); // return borrowed connection to the pool
    }
    catch (std::runtime_error &e)
    {
        std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
    }
}


int main(int argc, char **argv)
{
    // simulate parallel connection to DWH (basically parallel web crawlers in the Scraper component)

    std::thread t1(threadFunc);
    std::thread t2(threadFunc);
    std::thread t3(threadFunc);
    std::thread t4(threadFunc); // will throw exception, 'cause no connections are available at this time

    std::this_thread::sleep_for(std::chrono::milliseconds(1100));

    std::thread t5(threadFunc); // should be alright, 'cause at this point connections should be released

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

	return 0;
}
