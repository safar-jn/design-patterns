#ifndef DESIGN_PATTERNS_RETRYDECORATOR_H
#define DESIGN_PATTERNS_RETRYDECORATOR_H


#include "CrawlerDecorator.h"

#include <memory>
#include <utility>
#include <iostream>


/// one of the concrete decorators - this one extends base object's (Crawler) crawling behaviour with retry policy
class RetryDecorator: public CrawlerDecorator
{
    public:
             RetryDecorator (std::shared_ptr<CrawlerInterface> crawler, uint8_t retry_count);
        void execute        () override;
    private:
        uint8_t _retry_count = 0;
};


#endif //DESIGN_PATTERNS_RETRYDECORATOR_H
