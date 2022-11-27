#include "ModelerCore.h"


void ModelerCore::setStrategy (CalculationStrategy *strategy)
{
    _strategy = strategy;
}

void ModelerCore::model (const std::vector<double> &data) const
{
    std::cout << "[ModelerCore] | triggering calculation strategy" << std::endl;

    double res = _strategy->calculate(data);
    // ...

    std::cout << " |- result=" << res << std::endl;
}
