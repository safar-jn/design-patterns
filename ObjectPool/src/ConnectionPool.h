#ifndef DESIGN_PATTERNS_CONNECTIONPOOL_H
#define DESIGN_PATTERNS_CONNECTIONPOOL_H


#include "Connection.h"

#include <set>
#include <deque>
#include <mutex>
#include <memory>


class ConnectionPool
{
    public:
        static std::shared_ptr<ConnectionPool> getInstance();

        std::shared_ptr<Connection>     acquire();
        void                            release(std::shared_ptr<Connection> conn);
    private:
        ConnectionPool();

        static std::shared_ptr<ConnectionPool>  _instance;
        static std::mutex                       _mutex;

        std::deque<std::shared_ptr<Connection>> _available;
        std::set<std::shared_ptr<Connection>>   _in_use;
};


#endif //DESIGN_PATTERNS_CONNECTIONPOOL_H
