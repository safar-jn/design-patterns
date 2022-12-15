#include "Crawler.h"


Crawler::Crawler (std::string website): _website(std::move(website))
{}

void Crawler::execute ()
{
    // simulate crawling through a website
    std::cout << "[Crawler] | acquire '" << _website << "'" << std::endl;
}
