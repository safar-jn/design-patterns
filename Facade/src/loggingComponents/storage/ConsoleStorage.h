#ifndef DESIGN_PATTERNS_CONSOLESTORAGE_H
#define DESIGN_PATTERNS_CONSOLESTORAGE_H


#include "Storage.h"

#include <iostream>


/// simulate concrete implementation of one Storage within logging lib
class ConsoleStorage: public Storage
{
    public:
        void save (const std::string &msg) override;
};


#endif //DESIGN_PATTERNS_CONSOLESTORAGE_H
