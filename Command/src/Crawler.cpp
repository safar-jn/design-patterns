#include "Crawler.h"


void Crawler::setWebsite (const std::string &website)
{
    _website = website;
}

void Crawler::shallowCrawl ()
{
    std::cout << "[Crawler] | shallow crawl" << std::endl;

    this->download(_website);
}

void Crawler::deepCrawl (uint8_t depth)
{
    std::cout << "[Crawler] | deep crawl" << std::endl;

    std::list<std::string> subPages = {"/about", "/contact", "/foo?size=10", "/foo/bar", "/foo/bar/huh"};

    for (const auto &sp : subPages)
    {
        size_t sp_depth = std::count_if(sp.begin(), sp.end(), [](char c){ return c == '/'; });

        if (sp_depth <= depth)
            this->download(_website + sp);
    }
}

void Crawler::download (const std::string &url)
{
    std::cout << " |- downloading '" << url << "'" << std::endl;
}
