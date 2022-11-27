#include "COCalculationStrategy.h"


COCalculationStrategy::COCalculationStrategy (double factor): _factor(factor)
{}

double COCalculationStrategy::calculate (const std::vector<double> &data)
{
    /// simulate some complex calculation for corporate clients (CO)
    std::cout << "[ComplexStrategy] | calculating..." << std::endl;

    double res = 0.0;

    for (const auto &it : data)
        res += ((int)it % 2) ? it * _factor : it;

    return res;
}
