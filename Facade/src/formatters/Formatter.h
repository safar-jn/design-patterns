#ifndef DESIGN_PATTERNS_FORMATTER_H
#define DESIGN_PATTERNS_FORMATTER_H


#include <string>


class Formatter
{
    public:
        virtual std::string format (const std::string &msg) = 0;
};


#endif //DESIGN_PATTERNS_FORMATTER_H
