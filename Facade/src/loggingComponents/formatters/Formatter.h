#ifndef DESIGN_PATTERNS_FORMATTER_H
#define DESIGN_PATTERNS_FORMATTER_H


#include <string>


/// simulate common interface for Formatters within logging lib
class Formatter
{
    public:
        virtual std::string format (const std::string &msg) = 0;
};


#endif //DESIGN_PATTERNS_FORMATTER_H
