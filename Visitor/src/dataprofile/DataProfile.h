#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include "../exporters/Exporter.h"

#include <cstdlib>


/// common interface for all elements (DataProfile) that should accept visitors (Exporters)
class DataProfile
{
    public:
        virtual size_t count  () const = 0;
        // ---
        virtual void   accept (Exporter *exporter) = 0;
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
