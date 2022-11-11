#include "DatabaseConnection.h"

#include <iostream>


std::shared_ptr<DatabaseConnection> DatabaseConnection::_instance = nullptr;
std::mutex DatabaseConnection::_mutex;

DatabaseConnection::DatabaseConnection (const std::string &uri, const std::string &usr, const std::string &pwd):
    _uri(uri), _usr(usr), _pwd(pwd)
{}

std::shared_ptr<DatabaseConnection> DatabaseConnection::getInstance (const std::string &uri,
                                                                     const std::string &usr,
                                                                     const std::string &pwd)
{
    std::lock_guard<std::mutex> lock(DatabaseConnection::_mutex);

    if (!_instance)
        _instance.reset(new DatabaseConnection(uri, usr, pwd));

    return _instance;
}

bool DatabaseConnection::execute (const std::string & query) const
{
    std::cout << "[" << _uri << "] | executing '" << query << "'" << std::endl;
    return true;
}
