#ifndef DESIGN_PATTERNS_CONNECTION_H
#define DESIGN_PATTERNS_CONNECTION_H


#include "DummyConnector.h"

#include <memory>
#include <string>
#include <iostream>


class DWHConnection
{
    public:
             DWHConnection (const std::string &uri, const std::string &usr, const std::string &pwd);
        bool save          (const std::string &data);
    private:
        std::string _uri;
        std::string _usr;
        std::string _pwd;

        std::shared_ptr<DummyConnector> _connector {nullptr}; // lazy init actual connection
};


#endif //DESIGN_PATTERNS_CONNECTION_H