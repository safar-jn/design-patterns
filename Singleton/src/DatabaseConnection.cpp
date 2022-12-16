#include "DatabaseConnection.h"


std::shared_ptr<DatabaseConnection> DatabaseConnection::_instance = nullptr;
std::mutex DatabaseConnection::_mutex;

DatabaseConnection::DatabaseConnection (std::string uri, std::string usr, std::string pwd):
    _uri(std::move(uri)), _usr(std::move(usr)), _pwd(std::move(pwd))
{}

std::shared_ptr<DatabaseConnection> DatabaseConnection::getInstance (std::string uri, std::string usr, std::string pwd)
{
    // create new instance only if it doesn't exist yet, otherwise just return the existing one

    std::scoped_lock<std::mutex> lock(DatabaseConnection::_mutex);

    if (!_instance)
        _instance.reset(new DatabaseConnection(std::move(uri), std::move(usr), std::move(pwd)));

    return _instance;
}

bool DatabaseConnection::execute (const std::string &query) const
{
    // simulate executing database query

    std::cout << " |- [DatabaseConnection] | " << _uri << " | executing '" << query << "'" << std::endl;
    return true;
}
