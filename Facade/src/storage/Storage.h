#ifndef DESIGN_PATTERNS_STORAGE_H
#define DESIGN_PATTERNS_STORAGE_H


#include <string>


class Storage
{
    public:
        virtual void save (const std::string &msg) = 0;
};


#endif //DESIGN_PATTERNS_STORAGE_H
