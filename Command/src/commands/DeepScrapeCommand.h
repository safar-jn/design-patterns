#ifndef DESIGN_PATTERNS_DEEPSCRAPECOMMAND_H
#define DESIGN_PATTERNS_DEEPSCRAPECOMMAND_H


#include "Command.h"
#include "../Crawler.h"

#include <string>
#include <iostream>


class DeepScrapeCommand: public Command
{
    public:
             DeepScrapeCommand (Crawler *crawler, const std::string &website, uint8_t depth);
        void execute           () override;
    private:
        Crawler     *_crawler = nullptr;
        std::string _website;
        uint8_t     _depth;
};


#endif //DESIGN_PATTERNS_DEEPSCRAPECOMMAND_H
