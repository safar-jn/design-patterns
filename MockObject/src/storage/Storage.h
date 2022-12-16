#ifndef DESIGN_PATTERNS_STORAGE_H
#define DESIGN_PATTERNS_STORAGE_H

#include <string>


/// common interface for all logger Storages
///  - important so Mock Object knows what behaviour to mimic during unittesting
class Storage
{
    public:
        virtual void write (const std::string &msg) = 0;
};


#endif //DESIGN_PATTERNS_STORAGE_H
