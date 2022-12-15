#ifndef DESIGN_PATTERNS_CONSOLESTORAGE_H
#define DESIGN_PATTERNS_CONSOLESTORAGE_H

#include "Storage.h"

#include <string>


/// concrete Storage type within logging lib - used by ConsoleLogger to log into console
class ConsoleStorage: public Storage
{
    public:
        void write(const std::string &msg) override;
};


#endif //DESIGN_PATTERNS_CONSOLESTORAGE_H
