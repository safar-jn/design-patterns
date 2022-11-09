#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H

#include <string>
#include <vector>
#include <ostream>


class DataProfile
{
    private:
        friend class DataProfileBuilder;
        friend std::ostream & operator << (std::ostream & os, const DataProfile & dp);

        std::string         _name;
        std::string         _surname;
        uint16_t            _birth_year;
        std::vector<float>  _google_ratings;
        // ...
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
