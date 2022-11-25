#ifndef DESIGN_PATTERNS_SIMPLEVARIABLE_H
#define DESIGN_PATTERNS_SIMPLEVARIABLE_H


#include "Variable.h"

#include <string>
#include <iostream>


class SimpleVariable: public Variable
{
    public:
        SimpleVariable (const std::string &id, double value);
        // ...
        double getValue () const override;
    private:
        double _value;
};


#endif //DESIGN_PATTERNS_SIMPLEVARIABLE_H
