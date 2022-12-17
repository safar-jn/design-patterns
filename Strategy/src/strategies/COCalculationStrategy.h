#ifndef DESIGN_PATTERNS_COCALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_COCALCULATIONSTRATEGY_H


#include "CalculationStrategy.h"

#include <iostream>


/// concrete implementation of one Strategy - in this case calculation algorithm for CO (corporate) clients
class COCalculationStrategy: public CalculationStrategy
{
    public:
               COCalculationStrategy (double factor);
        double calculate             (const std::vector<double> &data) override;
    private:
        double _factor = 1.0;
};


#endif //DESIGN_PATTERNS_COCALCULATIONSTRATEGY_H
