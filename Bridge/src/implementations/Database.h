#ifndef DESIGN_PATTERNS_DATABASE_H
#define DESIGN_PATTERNS_DATABASE_H


#include <string>
#include <iostream>


/// common interface for all Database connectors
class Database
{
    public:
        virtual            ~Database         ();
        virtual void        createConnection (const std::string &uri, const std::string &usr, const std::string &pwd) = 0;
        virtual std::string selectScore      (const std::string &clientID) = 0;
        virtual void        updateScore      (const std::string &clientID, const std::string &score) = 0;
        virtual void        insertScore      (const std::string &clientID, const std::string &score) = 0;
        // ...
};


#endif //DESIGN_PATTERNS_DATABASE_H
