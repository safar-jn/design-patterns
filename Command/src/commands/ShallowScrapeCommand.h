#ifndef DESIGN_PATTERNS_SHALLOWSCRAPECOMMAND_H
#define DESIGN_PATTERNS_SHALLOWSCRAPECOMMAND_H


#include "Command.h"
#include "../Crawler.h"

#include <string>
#include <iostream>


class ShallowScrapeCommand: public Command
{
    public:
             ShallowScrapeCommand (Crawler *crawler, const std::string &website);
        void execute              () override;
    private:
        Crawler     *_crawler = nullptr;
        std::string _website;
};


#endif //DESIGN_PATTERNS_SHALLOWSCRAPECOMMAND_H
