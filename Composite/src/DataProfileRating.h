#ifndef DESIGN_PATTERNS_DATAPROFILERATING_H
#define DESIGN_PATTERNS_DATAPROFILERATING_H


#include "DataProfile.h"


class DataProfileRating: public DataProfile
{
    public:
               DataProfileRating (double value);
        size_t count             () const override;
        double numerize          () const override;
    private:
        double _value;
};


#endif //DESIGN_PATTERNS_DATAPROFILERATING_H
