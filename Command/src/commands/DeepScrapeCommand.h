#ifndef DESIGN_PATTERNS_DEEPSCRAPECOMMAND_H
#define DESIGN_PATTERNS_DEEPSCRAPECOMMAND_H


#include "Command.h"
#include "../Crawler.h"

#include <string>
#include <memory>
#include <utility>
#include <iostream>


/// simulate concrete command - triggers deep scraping of given crawler
class DeepScrapeCommand: public Command
{
    public:
             DeepScrapeCommand (std::shared_ptr<Crawler> crawler, std::string website, uint8_t depth);
        void execute           () override;
    private:
        std::shared_ptr<Crawler> _crawler {nullptr};
        std::string              _website;
        uint8_t                  _depth;
};


#endif //DESIGN_PATTERNS_DEEPSCRAPECOMMAND_H
