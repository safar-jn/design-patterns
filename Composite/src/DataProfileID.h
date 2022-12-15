#ifndef DESIGN_PATTERNS_DATAPROFILEID_H
#define DESIGN_PATTERNS_DATAPROFILEID_H


#include "DataProfile.h"

#include <string>
#include <utility>


/// concrete element of the complex structure - this one is "end object" (i.e. no further nesting)
class DataProfileID: public DataProfile
{
    public:
               DataProfileID (std::string name, std::string surname, std::string rc);
        size_t count         () const override;
        double numerize      () const override;
    private:
        std::string _name;
        std::string _surname;
        std::string _rc;
};


#endif //DESIGN_PATTERNS_DATAPROFILEID_H
