#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "../Mediator.h"


class Crawler
{
    public:
        virtual void setMediator (Mediator *mediator) = 0;
    protected:
        Mediator *_meadiator = nullptr;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
