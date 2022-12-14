#ifndef DESIGN_PATTERNS_CONSOLESTORAGE_H
#define DESIGN_PATTERNS_CONSOLESTORAGE_H

#include "Storage.h"

#include <string>


/// concrete implementation of some Storage - irrelevant for this example
class ConsoleStorage: public Storage
{
    public:
        void write(const std::string &msg) override;
};


#endif //DESIGN_PATTERNS_CONSOLESTORAGE_H
