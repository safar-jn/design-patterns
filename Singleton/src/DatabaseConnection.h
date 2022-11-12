#ifndef DESIGN_PATTERNS_DATABASECONNECTION_H
#define DESIGN_PATTERNS_DATABASECONNECTION_H

#include <memory>
#include <mutex>


class DatabaseConnection
{
    public:
        static std::shared_ptr<DatabaseConnection> getInstance (const std::string &uri,
                                                                const std::string &usr,
                                                                const std::string &pwd);
        bool execute (const std::string &query) const;

    protected:
        DatabaseConnection  (const std::string &uri, const std::string &usr, const std::string &pwd);
        DatabaseConnection  (DatabaseConnection &other) = delete; // forbid cloning
        void operator =     (const DatabaseConnection &) = delete; // forbid assigning

        static std::shared_ptr<DatabaseConnection> _instance;
        static std::mutex _mutex;

        std::string _uri;
        std::string _usr;
        std::string _pwd;

        // DatabaseConnector _connector
};


#endif //DESIGN_PATTERNS_DATABASECONNECTION_H
