#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "DWHConnection.h"

#include <set>
#include <memory>
#include <iostream>


class Crawler
{
    public:
             Crawler (const std::string &url, bool log = false);
        void start   ();
    private:
        void logToDWH (const std::string &data);

        std::shared_ptr<DWHConnection> _conn {nullptr}; // lazy init

        std::string _url;
        bool        _log;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
