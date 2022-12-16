#ifndef DESIGN_PATTERNS_LOGGER_H
#define DESIGN_PATTERNS_LOGGER_H

#include "storage/Storage.h"

#include <memory>
#include <string>


/// simulate Logger object that we want to unittest
///  - under the hood it logs to a certain Storage (that normally complicates unittesting 'cause of dependency)
class Logger
{
    public:
             Logger (std::shared_ptr<Storage> storage);
        void info   (const std::string &msg);
        void warn   (const std::string &msg);
    protected:
        std::shared_ptr<Storage> _storage;
};


#endif //DESIGN_PATTERNS_LOGGER_H
