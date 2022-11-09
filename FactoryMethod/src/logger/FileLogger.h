#ifndef DESIGN_PATTERNS_FILELOGGER_H
#define DESIGN_PATTERNS_FILELOGGER_H

#include "Logger.h"


class FileLogger: public Logger
{
    public:
        void createStorage() override;
};


#endif //DESIGN_PATTERNS_FILELOGGER_H
