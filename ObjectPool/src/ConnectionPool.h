#ifndef DESIGN_PATTERNS_CONNECTIONPOOL_H
#define DESIGN_PATTERNS_CONNECTIONPOOL_H


#include "DWHConnection.h"

#include <set>
#include <deque>
#include <mutex>
#include <memory>
#include <iostream>


/// Pool of connections that can be used to connect to DWH
class ConnectionPool
{
    public:
        static std::shared_ptr<ConnectionPool> getInstance();

        std::shared_ptr<DWHConnection>  acquire();
        void                            release(const std::shared_ptr<DWHConnection> &conn);
    private:
        ConnectionPool();

        static std::shared_ptr<ConnectionPool>      _instance;
        static std::mutex                           _mutex;

        std::deque<std::shared_ptr<DWHConnection>> _available;
        std::set<std::shared_ptr<DWHConnection>>   _in_use;
};


#endif //DESIGN_PATTERNS_CONNECTIONPOOL_H
