#ifndef DESIGN_PATTERNS_STORAGE_H
#define DESIGN_PATTERNS_STORAGE_H


#include <string>


/// simulate common interface for Storages within logging lib
class Storage
{
    public:
        virtual void save (const std::string &msg) = 0;
};


#endif //DESIGN_PATTERNS_STORAGE_H
