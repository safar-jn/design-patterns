#ifndef DESIGN_PATTERNS_PRCALCULATION_H
#define DESIGN_PATTERNS_PRCALCULATION_H


#include "Calculation.h"

#include <numeric>


/// simple algorithm for PR clients
class PRCalculation: public Calculation
{
    public:
        double calculate (const std::vector<double> &binnedData) override;
};


#endif //DESIGN_PATTERNS_PRCALCULATION_H
