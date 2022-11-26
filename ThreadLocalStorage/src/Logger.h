#ifndef DESIGN_PATTERNS_LOGGER_H
#define DESIGN_PATTERNS_LOGGER_H


#include "Buffer.h"

#include <iostream>


class Logger
{
    public:
        void config (const std::string &infoPrefix, const std::string &warnPrefix, const std::string &errPrefix);
        void info   (const std::string &msg);
        void warn   (const std::string &msg);
        void err    (const std::string &msg);
        // ...
        std::string dump ();
    private:
        std::string _info_prefix;
        std::string _warn_prefix;
        std::string _err_prefix;
};


#endif //DESIGN_PATTERNS_LOGGER_H
