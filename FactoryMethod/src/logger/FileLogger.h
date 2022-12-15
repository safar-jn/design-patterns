#ifndef DESIGN_PATTERNS_FILELOGGER_H
#define DESIGN_PATTERNS_FILELOGGER_H

#include "Logger.h"


/// concrete Logger type within logging lib
///   - overrides createStorage() (Factory Method) in such way that it uses FileStorage as a corresponding storage object
class FileLogger: public Logger
{
    public:
        void createStorage() override;
};


#endif //DESIGN_PATTERNS_FILELOGGER_H
