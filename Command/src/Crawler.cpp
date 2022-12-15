#include "Crawler.h"


void Crawler::setWebsite (std::string website)
{
    _website = std::move(website);
}

void Crawler::shallowCrawl ()
{
    // simulate shallow crawling (i.e. going through only top-level of given website)
    std::cout << "[Crawler] | shallow crawl" << std::endl;
    _download(_website);
}

void Crawler::deepCrawl (uint8_t depth)
{
    // simulate deep crawling (i.e. going through sub-pages of given website)
    std::cout << "[Crawler] | deep crawl" << std::endl;

    std::list<std::string> subPages = {"/about", "/contact", "/foo?size=10", "/foo/bar", "/foo/bar/huh"};
    for (const auto &sp : subPages)
    {
        size_t sp_depth = std::count_if(sp.begin(), sp.end(), [](char c){ return c == '/'; });

        if (sp_depth <= depth)
            _download(_website + sp);
    }
}

void Crawler::_download (const std::string &url)
{
    // simulate retrieving HTML stored at given URL
    std::cout << " |- downloading '" << url << "'" << std::endl;
}
