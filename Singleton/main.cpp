#include <thread>
#include <memory>
#include <iostream>

#include "src/DatabaseConnection.h"


void t1Func()
{
    // simulate getting DB connection (URIs are different only to see that there'll always really be only one instance)

    std::shared_ptr<DatabaseConnection> conn = DatabaseConnection::getInstance("localhost:8080", "admin", "1234");
    conn->execute("SELECT * FROM users");
}

void t2Func()
{
    // simulate getting DB connection (URIs are different only to see that there'll always really be only one instance)

    std::shared_ptr<DatabaseConnection> conn = DatabaseConnection::getInstance("remotehost:8080", "admin", "1234");
    conn->execute("SELECT * FROM products");
}


int main(int argc, char **argv)
{
    std::cout << "[main] | both URIs should always be same" << std::endl;

    std::thread t1(t1Func);
    std::thread t2(t2Func);

    t1.join();
    t2.join();

	return 0;
}
