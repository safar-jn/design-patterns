#include "DWHConnection.h"


DWHConnection::DWHConnection (std::string uri, std::string usr, std::string pwd):
        _uri(std::move(uri)), _usr(std::move(usr)), _pwd(std::move(pwd))
{}

bool DWHConnection::save (const std::string &data)
{
    // simulate saving data to DWH
    //  - only establish the actual connection (i.e. DummyConnector) with first viable request

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