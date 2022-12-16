#include "src/Variable.h"
#include "src/SimpleVariable.h"
#include "src/ComplexVariable.h"

#include <iostream>


void cloneVariable (const Variable &variable)
{
    // simulate cloning variables

    auto copy = variable.clone();

    variable.print();
    std::cout << " |- memAddr: " << &variable << std::endl;

    copy->print();
    std::cout << " |- memAddr: " << copy << std::endl;

    delete copy; // cleanup because clone() creates completely new object
}


int main (int argc, char **argv)
{
    SimpleVariable simpleVariable("var_1", 3.14);
    ComplexVariable complexVariable("var_2", {1, 2, 3, 4});

    cloneVariable(simpleVariable);
    cloneVariable(complexVariable);

    return 0;
}
