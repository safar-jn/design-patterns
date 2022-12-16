#include "src/Variable.h"
#include "src/SimpleVariable.h"
#include "src/ComplexVariable.h"
#include "src/NullVariable.h"

#include <map>
#include <string>
#include <iostream>


void simulateCalculation (const std::map<std::string, Variable*> &variables)
{
    // simulate some hardcoded calculations using variables
    //  - hardcoding is important for the NullObjects to make sense (so missing variable would normally throw exception)

    std::cout << "[main] | simulating calculation with..." << std::endl;

    double res = 0;

    res += (variables.find("zr_var_1")->second->getValue() * 0.5);
    res += (variables.find("zr_var_2")->second->getValue() * 0.5);
    res += (variables.find("zr_var_3")->second->getValue() * 0.5);

    res += variables.find("fb_var_1")->second->getValue();
    res += variables.find("fb_var_2")->second->getValue();

    res *= variables.find("gg_var_1")->second->getValue();

    std::cout << "[main] | result=" << res << std::endl;
}


int main (int argc, char **argv)
{
    // create set of dummy variables (including NullVariable that effectively replaces non-existing values)

    std::map<std::string, Variable*> dummyVariables = {
        {"zr_var_1", new SimpleVariable("zr_var_1", 3.79)},
        {"zr_var_2", new NullVariable("zr_var_2")}, // == non-existing value
        {"zr_var_3", new SimpleVariable("zr_var_3", 7.22)},
        {"fb_var_1", new NullVariable("fb_var_1")}, // == non-existing value
        {"fb_var_2", new SimpleVariable("fb_var_2", 5.29)},
        {"gg_var_1", new NullVariable("gg_var_1")} // == non-existing value
    };

    // simulate calculation
    simulateCalculation(dummyVariables);

    // replace gg_var_1
    auto tempVar = dummyVariables.find("gg_var_1");

    delete tempVar->second;
    dummyVariables.erase(tempVar);

    dummyVariables.insert({"gg_var_1", new ComplexVariable("gg_var_1", {2, 3, 43, 231, 0, 32, 214, 104})});

    // simulate calculation
    simulateCalculation(dummyVariables);

    // cleanup
    for (const auto &var: dummyVariables)
        delete var.second;

    return 0;
}
