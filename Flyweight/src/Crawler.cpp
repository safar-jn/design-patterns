#include "Crawler.h"


Crawler::Crawler (const std::string &website, ConfigFactory *confFactory):
    _website(website), _conf_factory(confFactory)
{}

void
Crawler::configure (uint16_t timeout, uint8_t retryCount,
                    const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass)
{
    _config = &_conf_factory->getConfig(timeout, retryCount, proxyHost, proxyUser, proxyPass);
}

void Crawler::crawl () const
{
    /// simulate downloading website

    if (!_config)
        return;

    std::cout   << "[Crawler] | downloading '" << _website << "'\n"
                << "  - " << *_config << "\n"
                << "  - configMem: " << _config << "\n" << std::endl;
}
