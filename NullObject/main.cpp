#include "src/Variable.h"
#include "src/SimpleVariable.h"
#include "src/ComplexVariable.h"
#include "src/NullVariable.h"

#include <list>
#include <iostream>


void run_calculation (const std::list<Variable*> &variables)
{
    /// simulate some calculations using existing variables

    double res = 0;

    for (const auto &var : variables)
    {
        res += var->getId().find("fb") != std::string::npos ? var->getValue() : (var->getValue() * 0.5);
    }

    std::cout << "result=" << res << std::endl;
}


int main (int argc, char **argv)
{
    std::list<Variable*> dummyVariables = {
            new SimpleVariable("zr_var_1", 3.79),
            new NullVariable("zr_var_2"),
            new SimpleVariable("zr_var_3", 7.22),
            new ComplexVariable("gg_var_1", {2, 3, 43, 231, 0, 32, 214, 104}),
            new NullVariable("fb_var_1"),
            new SimpleVariable("fb_var_2", 5.29)
    };

    // ---

    run_calculation(dummyVariables);

    // ---

    for (const auto &var : dummyVariables)
        delete var;

    return 0;
}
