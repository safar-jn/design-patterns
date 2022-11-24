#ifndef DESIGN_PATTERNS_CALCULATION_H
#define DESIGN_PATTERNS_CALCULATION_H


#include <vector>
#include <unordered_map>
#include <iostream>


class Calculation
{
    public:
        virtual      ~Calculation () = default;
        // ...
                double execute    (const std::unordered_map<std::string, double> &data);
        // ...
        virtual void   filter     (const std::unordered_map<std::string, double> &data, std::vector<double> &result);
        virtual void   bin        (std::vector<double> &filteredData);
        virtual double calculate  (const std::vector<double> &binnedData) = 0;
        virtual double scale      (double result);

};


#endif //DESIGN_PATTERNS_CALCULATION_H
