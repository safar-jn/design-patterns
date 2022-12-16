#include "SimpleVariable.h"


SimpleVariable::SimpleVariable (std::string name, double value): Variable(std::move(name)), _value(value)
{}

void SimpleVariable::print () const
{
    std::cout << "[SimpleVariable] | name='" << _name << "'; value='" << _value << "'" << std::endl;
}

Variable* SimpleVariable::clone () const
{
    return new SimpleVariable(*this);
}
