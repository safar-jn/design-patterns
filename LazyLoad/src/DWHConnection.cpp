#include "DWHConnection.h"

#include <iostream>


DWHConnection::DWHConnection (const std::string &uri, const std::string &usr, const std::string &pwd):
        _uri(uri), _usr(usr), _pwd(pwd)
{
    /// simulate establishing connection to DWH

    std::cout << "[DWHConnection] | establishing connection to '" << _uri << "'" << std::endl;
}

DWHConnection::~DWHConnection ()
{
    /// simulate closing connection to DWH

    std::cout << "[DWHConnection] | closing connection to '" << _uri << "'" << std::endl;
}

bool DWHConnection::save (const std::string &data)
{
    /// simulate establishing connection to DWH

    std::cout << "[DWHConnection] | saving '" << data << "' to DWH" << std::endl;
    return true;
}