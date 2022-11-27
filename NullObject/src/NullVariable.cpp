#include "NullVariable.h"


NullVariable::NullVariable (const std::string &id): Variable(id)
{}

double NullVariable::getValue () const
{
    std::cout << "using: [NullVariable] " << getId() << "=0.0" << std::endl;
    return 0.0;
}
