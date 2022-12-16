#include "Variable.h"


Variable::Variable (std::string id): _id(std::move(id))
{}

Variable::~Variable ()
{}

std::string Variable::getId () const
{
    return _id;
}
