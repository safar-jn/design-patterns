#ifndef DESIGN_PATTERNS_COMPLEXVARIABLE_H
#define DESIGN_PATTERNS_COMPLEXVARIABLE_H


#include "Variable.h"

#include <string>
#include <vector>
#include <numeric>
#include <iostream>


/// concrete implementation of some real Variable
class ComplexVariable: public Variable
{
    public:
        ComplexVariable (const std::string &id, const std::vector<int> &values);
        // ...
        double getValue () const override;
    private:
        std::vector<int> _values;
};


#endif //DESIGN_PATTERNS_COMPLEXVARIABLE_H
