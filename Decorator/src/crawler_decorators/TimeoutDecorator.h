#ifndef DESIGN_PATTERNS_TIMEOUTDECORATOR_H
#define DESIGN_PATTERNS_TIMEOUTDECORATOR_H


#include "CrawlerDecorator.h"

#include <thread>
#include <memory>
#include <iostream>


class TimeoutDecorator: public CrawlerDecorator
{
    public:
             TimeoutDecorator (std::shared_ptr<CrawlerInterface> crawler, uint16_t timeout);
        void execute          () override;
    private:
        uint16_t _timeout = 0;
};


#endif //DESIGN_PATTERNS_TIMEOUTDECORATOR_H
