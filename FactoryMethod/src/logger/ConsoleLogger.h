#ifndef DESIGN_PATTERNS_CONSOLELOGGER_H
#define DESIGN_PATTERNS_CONSOLELOGGER_H

#include "Logger.h"


/// concrete Logger type within logging lib
///   - overrides createStorage() (Factory Method) in such way that it uses ConsoleStorage as a corresponding storage object
class ConsoleLogger: public Logger
{
    public:
        void createStorage() override;
};


#endif //DESIGN_PATTERNS_CONSOLELOGGER_H
