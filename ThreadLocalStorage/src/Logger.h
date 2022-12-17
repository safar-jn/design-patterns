#ifndef DESIGN_PATTERNS_LOGGER_H
#define DESIGN_PATTERNS_LOGGER_H


#include "Buffer.h"

#include <utility>
#include <iostream>


/// object that uses TLS - in this case "global" buffer for low-overhead logging messages
class Logger
{
    public:
        void config (std::string infoPrefix, std::string warnPrefix, std::string errPrefix);
        void info   (const std::string &msg);
        void warn   (const std::string &msg);
        void err    (const std::string &msg);
        // ...
        std::string dump ();
    private:
        std::string _infoPrefix;
        std::string _warnPrefix;
        std::string _errPrefix;
};


#endif //DESIGN_PATTERNS_LOGGER_H
