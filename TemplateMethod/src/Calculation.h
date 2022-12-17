#ifndef DESIGN_PATTERNS_CALCULATION_H
#define DESIGN_PATTERNS_CALCULATION_H


#include <vector>
#include <iostream>
#include <unordered_map>


/// parent class for all Calculation algorithms - defines the skeleton (i.e. individual steps) for all Calculation objects
class Calculation
{
    public:
                double execute    (const std::unordered_map<std::string, double> &data); // template method
        // ...
        virtual void   filter     (const std::unordered_map<std::string, double> &data, std::vector<double> &result);
        virtual void   bin        (std::vector<double> &filteredData);
        virtual double calculate  (const std::vector<double> &binnedData) = 0;
        virtual double scale      (double result);

};


#endif //DESIGN_PATTERNS_CALCULATION_H
