#include "GoogleCrawler.h"


void GoogleCrawler::execute (const std::string &searchQuery)
{
    // simulate crawling through a Google

    std::cout << "[GoogleCrawler] | downloading 'google.com/search?q=" << searchQuery << "'" << std::endl;
    _meadiator->mediate(this); // notify mediator
}

std::string GoogleCrawler::extractWebsite () const
{
    // simulate extracting website url from crawled google search
    return "website-1.edu";
}
