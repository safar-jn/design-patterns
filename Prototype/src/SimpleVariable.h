#ifndef DESIGN_PATTERNS_SIMPLEVARIABLE_H
#define DESIGN_PATTERNS_SIMPLEVARIABLE_H


#include "Variable.h"


class SimpleVariable: public Variable
{
    public:
                  SimpleVariable (const std::string &name, double value);
        void      print          () const override;
        // ...
        Variable* clone          () const override;
    private:
        double _value;
};


#endif //DESIGN_PATTERNS_SIMPLEVARIABLE_H
