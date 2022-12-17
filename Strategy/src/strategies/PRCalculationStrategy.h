#ifndef DESIGN_PATTERNS_PRCALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_PRCALCULATIONSTRATEGY_H


#include "CalculationStrategy.h"

#include <numeric>
#include <iostream>


/// concrete implementation of one Strategy - in this case calculation algorithm for PR (private) clients
class PRCalculationStrategy: public CalculationStrategy
{
    public:
        double calculate (const std::vector<double> &data) override;
};


#endif //DESIGN_PATTERNS_PRCALCULATIONSTRATEGY_H
