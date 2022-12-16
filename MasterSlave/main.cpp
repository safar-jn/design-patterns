#include "src/ScraperCore.h"

#include <iostream>


void simulateClient ()
{
    std::cout << "[main] | trigger scraping process for [john, doe]" << std::endl;

    // ---

    // easy to work with once set up
    // - we just request something from the master (ScraperCore) and don't care about the implementation details
    // - but under the hood the core creates multiple concurrently running slaves (Crawlers)
    ScraperCore core;
    auto res = core.scrapeClient("john", "doe");

    // ---

    std::cout << "[main] | results of scraping for [john,doe]" << std::endl;
    for (const auto &r: res)
        std::cout << " |- " << r << std::endl;
    std::cout << std::endl;
}

int main (int argc, char **argv)
{
    simulateClient(); // simulate usage (only communicating with master)
    return 0;
}