#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include "DataProfileIterator.h"

#include <map>


class DataProfile
{
        friend class DataProfileIterator;
    public:
        void insert (const std::string &section, const std::string &key, const std::string &value);
        // ...
        DataProfileIterator begin ();
        DataProfileIterator end   ();
    private:
        // map of sections of data entries (in other words map of maps)
        std::map<std::string, std::map<std::string, std::string>> _data;
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
