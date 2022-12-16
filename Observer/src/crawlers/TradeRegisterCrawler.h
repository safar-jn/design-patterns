#ifndef DESIGN_PATTERNS_TRADEREGISTERCRAWLER_H
#define DESIGN_PATTERNS_TRADEREGISTERCRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


/// concrete observer/subscriber - reacts on updates from producer in some way
class TradeRegisterCrawler: public Crawler
{
    public:
        void update  (const std::string &request) override;
        void execute () const;
    private:
        std::string _originalRequest;
};


#endif //DESIGN_PATTERNS_TRADEREGISTERCRAWLER_H
