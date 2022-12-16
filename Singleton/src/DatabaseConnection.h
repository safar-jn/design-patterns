#ifndef DESIGN_PATTERNS_DATABASECONNECTION_H
#define DESIGN_PATTERNS_DATABASECONNECTION_H


#include <iostream>
#include <utility>
#include <memory>
#include <mutex>


/// Singleton - restricts existence of only one connection object at a time
class DatabaseConnection
{
    public:
        static std::shared_ptr<DatabaseConnection> getInstance (std::string uri, std::string usr, std::string pwd);
               bool                                execute     (const std::string &query) const;
    private:
        DatabaseConnection (std::string uri, std::string usr, std::string pwd); // privatize constructor
        DatabaseConnection (DatabaseConnection &other) = delete; // forbid cloning
        void operator =    (const DatabaseConnection &) = delete; // forbid assigning

        static std::shared_ptr<DatabaseConnection> _instance; // only existing instance
        static std::mutex                          _mutex;

        std::string _uri;
        std::string _usr;
        std::string _pwd;
};


#endif //DESIGN_PATTERNS_DATABASECONNECTION_H
