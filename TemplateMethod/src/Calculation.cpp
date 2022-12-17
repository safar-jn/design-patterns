#include "Calculation.h"


double Calculation::execute (const std::unordered_map<std::string, double> &data)
{
    // define overall structure of the calc algorithm (it's important for this method to not be virtual)

    std::cout << "[Calculation] | executing algorithm..." << std::endl;

    std::vector<double> tmpData;
    double tmpResult = 0;

    filter(data, tmpData);
    bin(tmpData);
    tmpResult = calculate(tmpData);
    tmpResult = scale(tmpResult);

    return tmpResult;
}

void Calculation::filter (const std::unordered_map<std::string, double> &data, std::vector<double> &result)
{
    // define default filtering step of the algorithm (== do nothing)

    std::cout << " |- [Calculation] filtering step" << std::endl;

    for (const auto &it : data)
        result.push_back(it.second);
}

void Calculation::bin (std::vector<double> &filteredData)
{
    // define default binning step of the algorithm (== do nothing)

    std::cout << " |- [Calculation] binning step (NOP)" << std::endl;
}

double Calculation::scale (double result)
{
    // define default scaling step of the algorithm (== do nothing)

    std::cout << " |- [Calculation] scaling step (NOP)" << std::endl;
    return result;
}
