#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include <cstdlib>


class DataProfile
{
    public:
        virtual size_t count    () const = 0;
        virtual double numerize () const = 0;
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
