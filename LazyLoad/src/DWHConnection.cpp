#include "DWHConnection.h"


DWHConnection::DWHConnection (const std::string &uri, const std::string &usr, const std::string &pwd):
        _uri(uri), _usr(usr), _pwd(pwd)
{}

bool DWHConnection::save (const std::string &data)
{
    /// simulate saving data to DWH

    if (data.empty())
    {
        std::cout << "[DWHConnection] | nothing to save..." << std::endl;
        return false;
    }

    if (!_connector)
        _connector = std::make_shared<DummyConnector>(_uri, _usr, _pwd);

    std::cout << "[DWHConnection] | saving '" << data << "' to DWH" << std::endl;

    return true;
}