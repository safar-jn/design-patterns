#ifndef DESIGN_PATTERNS_COMPLEXVARIABLE_H
#define DESIGN_PATTERNS_COMPLEXVARIABLE_H


#include "Variable.h"

#include <vector>


class ComplexVariable: public Variable
{
    public:
                  ComplexVariable (const std::string &name, const std::vector<int> &value);
        void      print           () const override;
        // ...
        Variable* clone           () const override;
    private:
        std::vector<int> _value;
};


#endif //DESIGN_PATTERNS_COMPLEXVARIABLE_H
