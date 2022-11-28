#ifndef DESIGN_PATTERNS_DATAPROFILEID_H
#define DESIGN_PATTERNS_DATAPROFILEID_H


#include "DataProfile.h"

#include <string>


class DataProfileID: public DataProfile
{
    public:
               DataProfileID (const std::string &name, const std::string &surname, const std::string &rc);
        size_t count         () const override;
        double numerize      () const override;
    private:
        std::string _name;
        std::string _surname;
        std::string _rc;
};


#endif //DESIGN_PATTERNS_DATAPROFILEID_H
