#include "NullVariable.h"


NullVariable::NullVariable (const std::string &id): Variable(id)
{}

double NullVariable::getValue () const
{
    std::cout << " |- [NullVariable] " << getId() << "=0.0" << std::endl;
    return 0.0;
}
