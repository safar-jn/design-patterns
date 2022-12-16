#ifndef DESIGN_PATTERNS_DUMMYCONNECTOR_H
#define DESIGN_PATTERNS_DUMMYCONNECTOR_H


#include <string>
#include <iostream>


/// simulate some third-party connector (to DWH)
class DummyConnector
{
    public:
        DummyConnector (const std::string &uri, const std::string &usr, const std::string &pwd);
       ~DummyConnector ();
       // ...
};


#endif //DESIGN_PATTERNS_DUMMYCONNECTOR_H
