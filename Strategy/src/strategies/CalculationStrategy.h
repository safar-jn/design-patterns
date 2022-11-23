#ifndef DESIGN_PATTERNS_CALCULATIONSTRATEGY_H
#define DESIGN_PATTERNS_CALCULATIONSTRATEGY_H


#include <vector>


class CalculationStrategy
{
    public:
        virtual ~CalculationStrategy () {};
        virtual double calculate (const std::vector<double> &data) = 0;
};


#endif //DESIGN_PATTERNS_CALCULATIONSTRATEGY_H
