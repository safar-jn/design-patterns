#ifndef DESIGN_PATTERNS_DWHCONNECTION_H
#define DESIGN_PATTERNS_DWHCONNECTION_H


#include <string>
#include <iostream>


class DWHConnection
{
    public:
             DWHConnection  (const std::string &uri, const std::string &usr, const std::string &pwd);
        bool save           (const std::string &data);
    private:
        std::string _uri;
        std::string _usr;
        std::string _pwd;
};


#endif //DESIGN_PATTERNS_DWHCONNECTION_H
