#ifndef DESIGN_PATTERNS_DATAPROFILERATING_H
#define DESIGN_PATTERNS_DATAPROFILERATING_H


#include "DataProfile.h"


/// simulate concrete element (of DataProfile) that accepts visitors (Exporters)
class DataProfileRating: public DataProfile
{
    public:
               DataProfileRating (double value);
        size_t count             () const override;
        double getValue          () const;
        // ...
        void   accept            (Exporter *exporter) override;
    private:
        double _value;
};


#endif //DESIGN_PATTERNS_DATAPROFILERATING_H
