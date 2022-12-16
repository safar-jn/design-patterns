#include "DWHConnection.h"


DWHConnection::DWHConnection (std::string uri, std::string usr, std::string pwd):
    _uri(std::move(uri)), _usr(std::move(usr)), _pwd(std::move(pwd))
{}

bool DWHConnection::save (const std::string &data)
{
    // simulate saving data to DWH

    std::cout << (" |- [DWHConnection] saving '" + data + "' to DWH via '" + _uri + "'\n");
    return true;
}
