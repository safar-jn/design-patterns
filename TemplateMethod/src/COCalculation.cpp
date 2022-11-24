#include "COCalculation.h"


void COCalculation::filter (const std::unordered_map<std::string, double> &data, std::vector<double> &result)
{
    /// simulate some filtering

    std::cout << " |- [COCalculation] filtering step" << std::endl;

    for (const auto &it : data)
    {
        if (it.first.find("fb") != std::string::npos)
            result.push_back(it.second);
    }
}

double COCalculation::calculate (const std::vector<double> &binnedData)
{
    /// simulate some calculation

    std::cout << " |- [COCalculation] calculating step" << std::endl;

    double res = 1.0;

    for (size_t i = 0, size = binnedData.size(); i < size; i++)
    {
        if (i % 2)
            res += binnedData[i];
        else
            res *= binnedData[i];
    }

    return res;
}

double COCalculation::scale (double result)
{
    /// simulate some scaling

    std::cout << " |- [COCalculation] scaling step" << std::endl;

    return result * 0.81;
}
