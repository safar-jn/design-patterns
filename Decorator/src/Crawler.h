#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "CrawlerInterface.h"

#include <string>
#include <utility>
#include <iostream>


/// base object
class Crawler: public CrawlerInterface
{
    public:
             Crawler (std::string website);
        void execute () override;
    private:
        std::string _website;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
