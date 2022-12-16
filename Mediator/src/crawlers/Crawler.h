#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "../Mediator.h"


/// common interface for all objects (Crawlers) that communicate with each other through a mediator
class Crawler
{
    public:
        virtual void setMediator (Mediator *mediator);
    protected:
        Mediator *_meadiator = nullptr;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
