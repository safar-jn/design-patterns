#ifndef DESIGN_PATTERNS_MODELERCORE_H
#define DESIGN_PATTERNS_MODELERCORE_H


#include "strategies/CalculationStrategy.h"

#include <vector>
#include <memory>
#include <utility>
#include <iostream>


/// object that encapsulates used strategies (i.e. algorithms)
class ModelerCore
{
    public:
        void setStrategy (std::shared_ptr<CalculationStrategy> strategy);
        void model       (const std::vector<double> &data) const;
        // ...
    private:
        std::shared_ptr<CalculationStrategy> _strategy {nullptr};
};


#endif //DESIGN_PATTERNS_MODELERCORE_H
