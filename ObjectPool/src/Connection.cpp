#include "Connection.h"

#include <iostream>


Connection::Connection (const std::string &uri, const std::string &usr, const std::string &pwd):
    _uri(uri), _usr(usr), _pwd(pwd)
{}

bool Connection::save (const std::string &data)
{
    std::cout << "[" << _uri << "] | saving '" << data << "' to DWH" << std::endl;
    return true;
}
