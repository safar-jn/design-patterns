#ifndef DESIGN_PATTERNS_COCALCULATION_H
#define DESIGN_PATTERNS_COCALCULATION_H


#include "Calculation.h"

#include <iostream>


class COCalculation: public Calculation
{
    public:
        void   filter    (const std::unordered_map<std::string, double> &data, std::vector<double> &result) override;
        double calculate (const std::vector<double> &binnedData) override;
        double scale     (double result) override;
};


#endif //DESIGN_PATTERNS_COCALCULATION_H
