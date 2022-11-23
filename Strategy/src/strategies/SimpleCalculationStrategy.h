#ifndef DESIGN_PATTERNS_SIMPLECALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_SIMPLECALCULATIONSTRATEGY_H


#include "CalculationStrategy.h"

#include <numeric>
#include <iostream>


class SimpleCalculationStrategy: public CalculationStrategy
{
    public:
        double calculate (const std::vector<double> &data) override;
};


#endif //DESIGN_PATTERNS_SIMPLECALCULATIONSTRATEGY_H
