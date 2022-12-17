#ifndef DESIGN_PATTERNS_PRCALCULATION_H
#define DESIGN_PATTERNS_PRCALCULATION_H


#include "Calculation.h"

#include <numeric>


/// extension of base Calculation - simple algorithm for PR (private) clients
class PRCalculation: public Calculation
{
    public:
        double calculate (const std::vector<double> &binnedData) override;
};


#endif //DESIGN_PATTERNS_PRCALCULATION_H
