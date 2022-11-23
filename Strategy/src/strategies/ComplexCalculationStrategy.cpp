#include "ComplexCalculationStrategy.h"


ComplexCalculationStrategy::ComplexCalculationStrategy (double factor): _factor(factor)
{}

double ComplexCalculationStrategy::calculate (const std::vector<double> &data)
{
    /// simulate some complex calculation
    std::cout << "[ComplexStrategy] | calculating..." << std::endl;

    double res = 0.0;

    for (const auto &it : data)
        res += ((int)it % 2) ? it * _factor : it;

    return res;
}
