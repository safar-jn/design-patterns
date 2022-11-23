#ifndef DESIGN_PATTERNS_COMPLEXCALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_COMPLEXCALCULATIONSTRATEGY_H


#include "CalculationStrategy.h"

#include <iostream>


class ComplexCalculationStrategy: public CalculationStrategy
{
    public:
               ComplexCalculationStrategy (double factor);
        double calculate                  (const std::vector<double> &data) override;
    private:
        double _factor = 1.0;
};


#endif //DESIGN_PATTERNS_COMPLEXCALCULATIONSTRATEGY_H
