#ifndef DESIGN_PATTERNS_LOGGER_H
#define DESIGN_PATTERNS_LOGGER_H

#include "../storage/Storage.h"

#include <memory>
#include <string>


class Logger
{
    public:
        void info(const std::string &msg);
        void warn(const std::string &msg);
        // ...
        virtual void createStorage() = 0;
    protected:
        std::shared_ptr<Storage> _storage;
};


#endif //DESIGN_PATTERNS_LOGGER_H
