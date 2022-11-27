#ifndef DESIGN_PATTERNS_SIMPLECONSOLELOGGER_H
#define DESIGN_PATTERNS_SIMPLECONSOLELOGGER_H


#include "formatters/Formatter.h"
#include "formatters/SimpleFormatter.h"
#include "storage/Storage.h"
#include "storage/ConsoleStorage.h"

#include <string>
#include <memory>


/// FACADE - for ease of use of logger components
class SimpleConsoleLogger
{
    public:
        void info (const std::string &msg) const;
        void warn (const std::string &msg) const;
        void dbg  (const std::string &msg) const;
        void err  (const std::string &msg) const;
    private:
        void log  (const std::string &msg, const std::string &color) const;

        std::shared_ptr<Formatter>  _formatter = std::make_shared<SimpleFormatter>();
        std::shared_ptr<Storage>    _storage = std::make_shared<ConsoleStorage>();
};


#endif //DESIGN_PATTERNS_SIMPLECONSOLELOGGER_H
