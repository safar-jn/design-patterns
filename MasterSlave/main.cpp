#include "src/ScraperCore.h"

#include <iostream>


int main (int argc, char **argv)
{
    /// easy to work with once set up
    /// - we just request something from the master and don't care about the implementation details
    /// - but under the hood the core creates multiple concurrently running crawlers (i.e. slaves)
    ScraperCore core;
    auto res = core.scrapeClient("john", "doe");

    // ---

    std::cout << "scraping for [john,doe]" << std::endl;
    for (const auto &r: res)
        std::cout << "\t" << r << std::endl;

    return 0;
}