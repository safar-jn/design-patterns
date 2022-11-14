#include "Crawler.h"


Crawler::Crawler (const std::string &website): _website(website)
{}

void Crawler::execute ()
{
    /// simulate crawling through a website

    std::cout << "[Crawler] | acquire '" << _website << "'" << std::endl;
}
