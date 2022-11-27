#ifndef DESIGN_PATTERNS_PRCALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_PRCALCULATIONSTRATEGY_H


#include "CalculationStrategy.h"

#include <numeric>
#include <iostream>


class PRCalculationStrategy: public CalculationStrategy
{
    public:
        double calculate (const std::vector<double> &data) override;
};


#endif //DESIGN_PATTERNS_PRCALCULATIONSTRATEGY_H
