#ifndef DESIGN_PATTERNS_SIMPLEFORMATTER_H
#define DESIGN_PATTERNS_SIMPLEFORMATTER_H


#include "Formatter.h"

#include <ctime>
#include <iomanip>
#include <sstream>


/// simulate concrete implementation of one Formatter within logging lib
class SimpleFormatter: public Formatter
{
    public:
        std::string format(const std::string &msg) override;
};


#endif //DESIGN_PATTERNS_SIMPLEFORMATTER_H
