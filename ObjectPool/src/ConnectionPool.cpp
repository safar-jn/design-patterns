#include "ConnectionPool.h"


std::shared_ptr<ConnectionPool> ConnectionPool::_instance = nullptr;
std::mutex ConnectionPool::_mutex;

ConnectionPool::ConnectionPool ()
{
    // predefined connections that are available

    std::cout << "[ConnectionPool] | creating pool with 3 available connections\n";

    _available.push_back(std::make_shared<DWHConnection>("host_1:8080", "admin", "1234"));
    _available.push_back(std::make_shared<DWHConnection>("host_2:8080", "admin", "1234"));
    _available.push_back(std::make_shared<DWHConnection>("host_3:8080", "admin", "1234"));
}

std::shared_ptr<ConnectionPool> ConnectionPool::getInstance ()
{
    std::scoped_lock lock(_mutex);

    if (!_instance)
        _instance.reset(new ConnectionPool);

    return _instance;
}

std::shared_ptr<DWHConnection> ConnectionPool::acquire ()
{
    // borrow one of the available connections to some client

    std::scoped_lock lock(_mutex);

    std::cout << "[ConnectionPool] | borrowing one of the available connections\n";

    if (_available.empty())
        throw std::runtime_error(" |- no connection available at this moment... try again later!");

    auto conn = _available.front();
    _available.pop_front();
    _in_use.insert(conn);

    return conn;
}

void ConnectionPool::release (const std::shared_ptr<DWHConnection> &conn)
{
    // retrieve one of the borrowed connections from some client

    std::scoped_lock lock(_mutex);

    std::cout << "[ConnectionPool] | returning one of the connections to the pool\n";

    _available.push_back(conn);
    _in_use.erase(conn);
}
