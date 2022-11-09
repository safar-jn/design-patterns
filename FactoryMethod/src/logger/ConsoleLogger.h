#ifndef DESIGN_PATTERNS_CONSOLELOGGER_H
#define DESIGN_PATTERNS_CONSOLELOGGER_H

#include "Logger.h"


class ConsoleLogger: public Logger
{
    public:
        void createStorage() override;
};


#endif //DESIGN_PATTERNS_CONSOLELOGGER_H
