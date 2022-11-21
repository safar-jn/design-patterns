#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include <string>


class Crawler
{
    public:
        virtual void update (const std::string &request) = 0;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
