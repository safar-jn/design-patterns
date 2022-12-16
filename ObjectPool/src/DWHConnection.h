#ifndef DESIGN_PATTERNS_DWHCONNECTION_H
#define DESIGN_PATTERNS_DWHCONNECTION_H


#include <string>
#include <utility>
#include <iostream>


/// simulate connection (i.e. connector) to DWH
class DWHConnection
{
    public:
             DWHConnection  (std::string uri, std::string usr, std::string pwd);
        bool save           (const std::string &data);
    private:
        std::string _uri;
        std::string _usr;
        std::string _pwd;
};


#endif //DESIGN_PATTERNS_DWHCONNECTION_H
