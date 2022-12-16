#include "DummyConnector.h"


DummyConnector::DummyConnector (const std::string &uri, const std::string &usr, const std::string &pwd)
{
    // simulate establishing connection to DWH using third-party connector
    std::cout << "[DWHConnector] | establishing connection to '" << uri << "' using '" << usr << ":" << pwd << "'" << std::endl;
}

DummyConnector::~DummyConnector ()
{
    // simulate closing connection to DWH
    std::cout << "[DWHConnector] | closing connection" << std::endl;
}
