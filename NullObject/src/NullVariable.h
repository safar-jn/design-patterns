#ifndef DESIGN_PATTERNS_NULLVARIABLE_H
#define DESIGN_PATTERNS_NULLVARIABLE_H


#include "Variable.h"

#include <iostream>


class NullVariable: public Variable
{
    public:
        NullVariable (const std::string &id);
        // ...
        double getValue () const override;
};


#endif //DESIGN_PATTERNS_NULLVARIABLE_H
