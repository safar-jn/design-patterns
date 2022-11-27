#ifndef DESIGN_PATTERNS_VARIABLE_H
#define DESIGN_PATTERNS_VARIABLE_H


#include <string>
#include <iostream>


class Variable
{
    public:
                          Variable (const std::string &name);
        virtual          ~Variable ();
        virtual void      print    () const = 0;
        // ...
        virtual Variable* clone    () const = 0;
    protected:
        std::string _name;
};


#endif //DESIGN_PATTERNS_VARIABLE_H
