#ifndef DESIGN_PATTERNS_CALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_CALCULATIONSTRATEGY_H


#include <vector>


/// common interface for all strategies - in this case calculation algorithms
class CalculationStrategy
{
    public:
        virtual double calculate (const std::vector<double> &data) = 0;
};


#endif //DESIGN_PATTERNS_CALCULATIONSTRATEGY_H
