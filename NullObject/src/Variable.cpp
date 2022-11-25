#include "Variable.h"


Variable::Variable (const std::string &id): _id(id)
{}

Variable::~Variable ()
{}

std::string Variable::getId () const
{
    return _id;
}
