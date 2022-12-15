#ifndef DESIGN_PATTERNS_SHALLOWSCRAPECOMMAND_H
#define DESIGN_PATTERNS_SHALLOWSCRAPECOMMAND_H


#include "Command.h"
#include "../Crawler.h"

#include <string>
#include <memory>
#include <utility>
#include <iostream>


/// simulate concrete command - triggers shallow scraping of given crawler
class ShallowScrapeCommand: public Command
{
    public:
             ShallowScrapeCommand (std::shared_ptr<Crawler> crawler, std::string website);
        void execute              () override;
    private:
        std::shared_ptr<Crawler> _crawler {nullptr};
        std::string              _website;
};


#endif //DESIGN_PATTERNS_SHALLOWSCRAPECOMMAND_H
