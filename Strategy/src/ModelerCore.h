#ifndef DESIGN_PATTERNS_MODELERCORE_H
#define DESIGN_PATTERNS_MODELERCORE_H


#include "strategies/CalculationStrategy.h"

#include <vector>
#include <iostream>


class ModelerCore
{
    public:
        void setStrategy (CalculationStrategy *strategy);
        void model       (const std::vector<double> &data) const;
        // ...
    private:
        CalculationStrategy *_strategy = nullptr;
};


#endif //DESIGN_PATTERNS_MODELERCORE_H
