#include "src/ModelerCore.h"
#include "src/strategies/CalculationStrategy.h"
#include "src/strategies/PRCalculationStrategy.h"
#include "src/strategies/COCalculationStrategy.h"

#include <vector>


void run_core (ModelerCore &core, const std::string &clientType, const std::vector<double> &data)
{
    CalculationStrategy *strategy = nullptr;

    if (clientType == "PR")
        strategy = new PRCalculationStrategy;
    else
        strategy = new COCalculationStrategy(3.14);

    core.setStrategy(strategy);
    core.model(data);

    delete strategy;
}


int main (int argc, char **argv)
{
    std::vector<double> dummyData = {1.0, 2.96, 8.12, 5.26786, 6.3, 8.9};

    // ...

    ModelerCore core;

    /// core triggers some simple calculation for private clients (PR)
    run_core(core, "PR", dummyData);

    /// core triggers some complex calculation for corporate clients (CO)
    run_core(core, "CO", dummyData);

    return 0;
}