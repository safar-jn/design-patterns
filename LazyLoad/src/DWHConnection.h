#ifndef DESIGN_PATTERNS_CONNECTION_H
#define DESIGN_PATTERNS_CONNECTION_H


#include <string>


/// simulate class provided by DWH for connecting
class DWHConnection
{
    public:
                DWHConnection   (const std::string &uri, const std::string &usr, const std::string &pwd);
               ~DWHConnection   ();
        bool    save            (const std::string &data);
    private:
        std::string _uri;
        std::string _usr;
        std::string _pwd;
};


#endif //DESIGN_PATTERNS_CONNECTION_H