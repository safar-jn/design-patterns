#ifndef DESIGN_PATTERNS_CRAWLERDECORATOR_H
#define DESIGN_PATTERNS_CRAWLERDECORATOR_H


#include "../CrawlerInterface.h"

#include <memory>
#include <utility>


/// base decorator - implements wrapping mechanism around the base object (Crawler), but does NOT modify it's behaviour
class CrawlerDecorator: public CrawlerInterface
{
    public:
             CrawlerDecorator   (std::shared_ptr<CrawlerInterface> crawler);
        void execute            () override;
    protected:
        std::shared_ptr<CrawlerInterface> _crawler {nullptr};
};


#endif //DESIGN_PATTERNS_CRAWLERDECORATOR_H
