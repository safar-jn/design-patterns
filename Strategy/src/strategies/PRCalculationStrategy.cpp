#include "PRCalculationStrategy.h"


double PRCalculationStrategy::calculate (const std::vector<double> &data)
{
    // simulate some simple calculation for private clients (PR)
    std::cout << "[SimpleStrategy] | calculating..." << std::endl;
    return std::reduce(data.begin(), data.end());
}
