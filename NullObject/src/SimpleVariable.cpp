#include "SimpleVariable.h"


SimpleVariable::SimpleVariable (const std::string &id, double value): Variable(id), _value(value)
{}

double SimpleVariable::getValue () const
{
    std::cout << "using: [SimpleVariable] " << getId() << "=" << _value << std::endl;
    return _value;
}
