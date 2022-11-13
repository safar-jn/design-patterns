#include <thread>
#include <iostream>

#include "src/ConnectionPool.h"


void t_func()
{
    /// simulate workload that includes saving data to DWH using one of the opened connections in ConnectionPool

    try
    {
        auto conn = ConnectionPool::getInstance()->acquire();

        conn->save("some data");
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));   // simulate some workload

        ConnectionPool::getInstance()->release(conn);
    }
    catch (std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }
}


int main(int argc, char **argv)
{
    /// simulate parallel connection to DWH

    std::thread t1(t_func);
    std::thread t2(t_func);
    std::thread t3(t_func);
    std::thread t4(t_func); // will throw exception, 'cause no connections are available at this time

    std::this_thread::sleep_for(std::chrono::milliseconds(1100));

    std::thread t5(t_func); // should be alright, 'cause at this point connections should be released

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

	return 0;
}
