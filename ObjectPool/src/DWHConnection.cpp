#include "DWHConnection.h"


DWHConnection::DWHConnection (const std::string &uri, const std::string &usr, const std::string &pwd):
    _uri(uri), _usr(usr), _pwd(pwd)
{}

bool DWHConnection::save (const std::string &data)
{
    /// simulate saving data to DWH

    std::cout << "[" << _uri << "] | saving '" << data << "' to DWH" << std::endl;
    return true;
}
