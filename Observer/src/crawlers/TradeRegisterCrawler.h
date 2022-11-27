#ifndef DESIGN_PATTERNS_TRADEREGISTERCRAWLER_H
#define DESIGN_PATTERNS_TRADEREGISTERCRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


class TradeRegisterCrawler: public Crawler
{
    public:
        void update  (const std::string &request) override;
        void execute () const;
    private:
        std::string _original_request;
};


#endif //DESIGN_PATTERNS_TRADEREGISTERCRAWLER_H
