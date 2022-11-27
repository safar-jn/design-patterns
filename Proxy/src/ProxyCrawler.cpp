#include "ProxyCrawler.h"


ProxyCrawler::ProxyCrawler (): _blacklist({".*\\.gov.*"}), _crawler(std::make_shared<Crawler>())
{}

void ProxyCrawler::download (const std::string &url)
{
    /// simulate skipping blacklisted url patterns

    for (const auto &bl: _blacklist)
        if (std::regex_match(url, std::regex(bl)))
            throw std::runtime_error("[ProxyCrawler] | '" + url + "' is blacklisted");

    std::cout << "[ProxyCrawler] -> ";
    _crawler->download(url);
}
