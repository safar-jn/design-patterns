#include "src/Calculation.h"
#include "src/PRCalculation.h"
#include "src/COCalculation.h"

#include <string>
#include <memory>
#include <iostream>
#include <unordered_map>


void runCalculation (const std::string &clientType, const std::unordered_map<std::string, double> &data)
{
    // simulate triggering different calculation algorithm based on client's type

    std::shared_ptr<Calculation> calc {nullptr};

    if (clientType == "PR")
        calc = std::make_shared<PRCalculation>();
    else
        calc = std::make_shared<COCalculation>();

    double result = calc->execute(data);
    std::cout << " |- result=" << result << std::endl;
}


int main (int argc, char **argv)
{
    std::unordered_map<std::string, double> dummyData =
    {
            { "gg_var_1", 1.93 },
            { "gg_var_2", 9.32 },
            { "gg_var_3", 0.23 },
            { "fb_var_1", 720.3 },
            { "zr_var_1", 36.98321 },
            { "zr_var_3", 0.03 },
            { "zr_var_2", 3.1415926535 },
    };

    // ---

    runCalculation("PR", dummyData);
    runCalculation("CO", dummyData);

    return 0;
}
