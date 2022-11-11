#include <thread>
#include <memory>
#include <iostream>

#include "src/DatabaseConnection.h"


void t1_func()
{
    std::shared_ptr<DatabaseConnection> conn = DatabaseConnection::getInstance("localhost:8080", "admin", "1234");
    conn->execute("SELECT * FROM users");
}

void t2_func()
{
    std::shared_ptr<DatabaseConnection> conn = DatabaseConnection::getInstance("remotehost:8080", "admin", "1234");
    conn->execute("SELECT * FROM products");
}


int main(int argc, char **argv)
{
    std::cout << "both URIs should always be same" << std::endl;

    std::thread t1(t1_func);
    std::thread t2(t2_func);

    t1.join();
    t2.join();

	return 0;
}
