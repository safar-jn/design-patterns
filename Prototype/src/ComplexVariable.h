#ifndef DESIGN_PATTERNS_COMPLEXVARIABLE_H
#define DESIGN_PATTERNS_COMPLEXVARIABLE_H


#include "Variable.h"

#include <vector>
#include <string>
#include <utility>


/// concrete cloneable object
class ComplexVariable: public Variable
{
    public:
                  ComplexVariable (std::string name, const std::vector<int> &value);
        void      print           () const override;
        // ...
        Variable* clone           () const override; // override to return ComplexVariable type (== this)
    private:
        std::vector<int> _value;
};


#endif //DESIGN_PATTERNS_COMPLEXVARIABLE_H
