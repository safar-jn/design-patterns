#include "src/ModelerCore.h"
#include "src/strategies/SimpleCalculationStrategy.h"
#include "src/strategies/ComplexCalculationStrategy.h"

#include <vector>


int main (int argc, char **argv)
{
    std::vector<double> dummyData = {1.0, 2.96, 8.12, 5.26786, 6.3, 8.9};

    // ...

    ModelerCore core;

    /// core triggers some simple calculation
    SimpleCalculationStrategy simpleStrategy;
    core.setStrategy(&simpleStrategy);
    core.model(dummyData);

    /// core triggers some complex calculation
    ComplexCalculationStrategy complexStrategy(3.14);
    core.setStrategy(&complexStrategy);
    core.model(dummyData);

    return 0;
}