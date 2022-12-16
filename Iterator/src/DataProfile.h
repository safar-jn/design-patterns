#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include "DataProfileIterator.h"

#include <map>


/// simulate complex data structure (basically just map of maps)
///  - corresponding iterator simplifies going through the entries one by one
class DataProfile
{
        friend class DataProfileIterator; // make corresponding Iterator friend class, so it can see priv. attributes
    public:
        void insert (const std::string &section, const std::string &key, const std::string &value);
        // ...
        // C++ way of saying "hey this class has its own iterator" - so we can use it in foreach cycle for example
        DataProfileIterator begin (); // Iterator pointing to "first" element in the structure
        DataProfileIterator end   (); // Iterator pointing to "one past last" element in the structure
    private:
        // map of sections of data entries (in other words map of maps)
        std::map<std::string, std::map<std::string, std::string>> _data;
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
