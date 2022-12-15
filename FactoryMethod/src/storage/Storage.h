#ifndef DESIGN_PATTERNS_STORAGE_H
#define DESIGN_PATTERNS_STORAGE_H

#include <string>


/// common interface for all Storage objects within logging lib
class Storage
{
    public:
        virtual void write (const std::string &msg) = 0;
};


#endif //DESIGN_PATTERNS_STORAGE_H
