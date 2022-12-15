#ifndef DESIGN_PATTERNS_ORACLEDATABASE_H
#define DESIGN_PATTERNS_ORACLEDATABASE_H


#include "Database.h"


/// concrete Database connector - for Oracle
class OracleDatabase: public Database
{
    public:
        void        createConnection (const std::string &uri, const std::string &usr, const std::string &pwd) override;
        std::string selectScore      (const std::string &clientID) override;
        void        updateScore      (const std::string &clientID, const std::string &score) override;
        void        insertScore      (const std::string &clientID, const std::string &score) override;
};


#endif //DESIGN_PATTERNS_ORACLEDATABASE_H
