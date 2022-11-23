#include "SimpleCalculationStrategy.h"


double SimpleCalculationStrategy::calculate (const std::vector<double> &data)
{
    /// simulate some simple calculation
    std::cout << "[SimpleStrategy] | calculating..." << std::endl;
    return std::reduce(data.begin(), data.end());
}
