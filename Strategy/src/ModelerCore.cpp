#include "ModelerCore.h"


void ModelerCore::setStrategy (std::shared_ptr<CalculationStrategy> strategy)
{
    _strategy = std::move(strategy);
}

void ModelerCore::model (const std::vector<double> &data) const
{
    std::cout << "[ModelerCore] | triggering calculation strategy" << std::endl;

    double res = _strategy->calculate(data); // delegate the actual work to Strategy object
    // ...

    std::cout << " |- result=" << res << std::endl;
}
