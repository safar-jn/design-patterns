#include "src/Calculation.h"
#include "src/PRCalculation.h"
#include "src/COCalculation.h"

#include <string>
#include <iostream>
#include <unordered_map>


void run_calculation (const std::string &clientType, const std::unordered_map<std::string, double> &data)
{
    /// simulate triggering calculation algorithm based on client's type

    Calculation *calc = clientType == "PR" ? (Calculation*)new PRCalculation : (Calculation*)new COCalculation;
    double result = calc->execute(data);

    delete calc;

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

    run_calculation("PR", dummyData);
    run_calculation("CO", dummyData);

    return 0;
}
