#include "GoogleCrawler.h"


void GoogleCrawler::setMediator (Mediator *mediator)
{
    _meadiator = mediator;
}

void GoogleCrawler::execute (const std::string &searchQuery)
{
    /// simulate downloading google site
    std::cout << "[GoogleCrawler] | downloading 'google.com/search?q=" << searchQuery << "'" << std::endl;
    _meadiator->mediate(this);
}

std::string GoogleCrawler::extractWebsite () const
{
    /// simulate extracting website url from downloaded google search
    return "website-1.edu";
}
