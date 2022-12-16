#ifndef DESIGN_PATTERNS_VARIABLE_H
#define DESIGN_PATTERNS_VARIABLE_H


#include <string>
#include <utility>


/// common interface for all Variables
class Variable
{
    public:
                            Variable (std::string id);
        virtual            ~Variable ();
                std::string getId    () const;
        virtual double      getValue () const = 0;
    protected:
        std::string _id;
};


#endif //DESIGN_PATTERNS_VARIABLE_H
