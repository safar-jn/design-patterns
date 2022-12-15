#ifndef DESIGN_PATTERNS_LOGGER_H
#define DESIGN_PATTERNS_LOGGER_H

#include "../storage/Storage.h"

#include <memory>
#include <string>


/// common interface for all Logger objects within logging lib
///   - defines Factory Method == createStorage()
///     - this method is used internally (info, warn, ...) to instantiate Storage object used for saving logs
///     - concrete corresponding Storage type is defined in subclasses when they override this method
///     - thanks to this it can implement common methods (such as info, warn, ...)
class Logger
{
    public:
        void info (const std::string &msg);
        void warn (const std::string &msg);
        // ...
        virtual void createStorage() = 0;
    protected:
        std::shared_ptr<Storage> _storage;
};


#endif //DESIGN_PATTERNS_LOGGER_H
