#ifndef DESIGN_PATTERNS_VARIABLE_H
#define DESIGN_PATTERNS_VARIABLE_H

#include <string>


class Variable
{
    public:
        Variable();

    protected:
        std::string _name;
        bool        _isRelevant;
};


#endif //DESIGN_PATTERNS_VARIABLE_H
