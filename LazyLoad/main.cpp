#include "src/DWHConnection.h"

#include <thread>


void simulate_crawler_execution()
{
    /// simulate web crawler saving individual websites it goes through to DWH
    DWHConnection conn("localhost:8080", "admin", "1234");

    // simulate failed request (i.e. nothing to save) == conn won't be established (i.e. DummyConnector not initialized)
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    conn.save("");

    // simulate failed request (i.e. nothing to save) == conn won't be established (i.e. DummyConnector not initialized)
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    conn.save("");

    // simulate failed request (i.e. nothing to save) == conn won't be established (i.e. DummyConnector not initialized)
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    conn.save("");

    // simulate good request == conn established here (i.e. DummyConnector initialized)
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    conn.save("<html>...</html>");
}


int main(int argc, char **argv)
{
    simulate_crawler_execution();
	return 0;
}
