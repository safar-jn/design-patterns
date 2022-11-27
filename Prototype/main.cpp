#include "src/Variable.h"
#include "src/SimpleVariable.h"
#include "src/ComplexVariable.h"

#include <iostream>


void cloneVariable (Variable *variable)
{
    /// simulate cloning variables

    auto copy = variable->clone();

    variable->print();
    std::cout << " |- memAddr: " << variable << std::endl;

    copy->print();
    std::cout << " |- memAddr: " << copy << std::endl;

    delete copy; // cleanup because clone() creates completely new object
}


int main (int argc, char **argv)
{
    auto simple = new SimpleVariable("var_1", 3.14);
    auto complex = new ComplexVariable("var_2", {1, 2, 3, 4});

    cloneVariable(simple);
    cloneVariable(complex);

    delete simple;
    delete complex;

    return 0;
}
