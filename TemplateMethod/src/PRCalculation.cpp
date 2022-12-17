#include "PRCalculation.h"


double PRCalculation::calculate (const std::vector<double> &binnedData)
{
    // define calculation step of the algorithm

    std::cout << " |- [PRCalculation] calculating step" << std::endl;
    return std::reduce(binnedData.begin(), binnedData.end());
}
