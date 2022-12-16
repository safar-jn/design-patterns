#ifndef DESIGN_PATTERNS_NULLVARIABLE_H
#define DESIGN_PATTERNS_NULLVARIABLE_H


#include "Variable.h"

#include <iostream>


/// concrete implementation of some "null" Variable
///  - replaces non-existing values so we don't have to check for their existance
///  - implements logically "null" behaviour (i.e. NOP)
class NullVariable: public Variable
{
    public:
        NullVariable (const std::string &id);
        // ...
        double getValue () const override;
};


#endif //DESIGN_PATTERNS_NULLVARIABLE_H
