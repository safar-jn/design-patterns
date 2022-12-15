#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include <cstdlib>


/// common interface for all elements in a complex tree-like structure
///  - i.e. "end objects" (DataProfileID, DataProfileRating, ...) as well as nested ones (DataProfileSection)
///  - defines functions that must be implemented by all elements
class DataProfile
{
    public:
        virtual size_t count    () const = 0; // count all elements (basically size() of the structure)
        virtual double numerize () const = 0; // simulate generating some numeric representation of the element
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
