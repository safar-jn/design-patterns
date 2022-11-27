#include "ComplexVariable.h"


ComplexVariable::ComplexVariable (const std::string &name, const std::vector<int> &value):
    Variable(name), _value(value)
{}

void ComplexVariable::print () const
{
    std::cout << "[ComplexVariable] | name='" << _name << "'; value='";
    for (const auto &v : _value)
        std::cout << v << ",";
    std::cout << "'" << std::endl;
}

Variable* ComplexVariable::clone () const
{
    return new ComplexVariable(*this);
}
