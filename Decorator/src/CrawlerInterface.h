#ifndef DESIGN_PATTERNS_CRAWLERINTERFACE_H
#define DESIGN_PATTERNS_CRAWLERINTERFACE_H


/// common interface for base object (Crawler) as well as corresponding decorators
class CrawlerInterface
{
    public:
        virtual void execute() = 0;
};


#endif //DESIGN_PATTERNS_CRAWLERINTERFACE_H
