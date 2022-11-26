#include "src/ScraperCore.h"

#include <iostream>


int main (int argc, char **argv)
{
    /// easy to work with once set up
    /// - we just request something from the master and don't care about the implementation details
    ScraperCore core;
    auto res = core.scrapeClient("john", "doe");

    // ---

    // result check
    for (const auto &r: res)
        std::cout << r << std::endl;

    return 0;
}