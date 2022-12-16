#include "Crawler.h"

#include <utility>


Crawler::Crawler (std::string website, ConfigFactory *confFactory):
    _website(std::move(website)), _confFactory(confFactory)
{}

void
Crawler::configure (uint16_t timeout, uint8_t retryCount,
                    const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass)
{
    // delegate config generation to ConfigFactory
    _config = &_confFactory->getConfig(timeout, retryCount, proxyHost, proxyUser, proxyPass);
}

void Crawler::crawl () const
{
    // simulate downloading website

    if (!_config)
        return;

    std::cout   << "[Crawler] | downloading '" << _website << "'\n"
                << " |- " << *_config << "\n"
                << " |- configMem: " << _config << std::endl;
}
