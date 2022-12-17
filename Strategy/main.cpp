#include "src/ModelerCore.h"
#include "src/strategies/CalculationStrategy.h"
#include "src/strategies/PRCalculationStrategy.h"
#include "src/strategies/COCalculationStrategy.h"

#include <vector>
#include <memory>


void runCore (ModelerCore &core, const std::string &clientType, const std::vector<double> &data)
{
    std::shared_ptr<CalculationStrategy> strategy {nullptr};

    // based on client type choose corresponding strategy (i.e. algorithm)
    if (clientType == "PR")
        strategy = std::make_shared<PRCalculationStrategy>();
    else
        strategy = std::make_shared<COCalculationStrategy>(3.14);

    core.setStrategy(strategy);
    core.model(data);
}


int main (int argc, char **argv)
{
    std::vector<double> dummyData = {1.0, 2.96, 8.12, 5.26786, 6.3, 8.9};

    // ...

    ModelerCore core;

    // core triggers some simple calculation for private clients (PR)
    runCore(core, "PR", dummyData);

    // core triggers some complex calculation for corporate clients (CO)
    runCore(core, "CO", dummyData);

    return 0;
}