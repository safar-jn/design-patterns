#ifndef DESIGN_PATTERNS_SIMPLEVARIABLE_H
#define DESIGN_PATTERNS_SIMPLEVARIABLE_H


#include "Variable.h"

#include <string>
#include <utility>


/// concrete cloneable object
class SimpleVariable: public Variable
{
    public:
                  SimpleVariable (std::string name, double value);
        void      print          () const override;
        // ...
        Variable* clone          () const override; // override to return SimpleVariable type (== this)
    private:
        double _value;
};


#endif //DESIGN_PATTERNS_SIMPLEVARIABLE_H
