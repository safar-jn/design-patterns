#include "src/Crawler.h"
#include "src/ConfigFactory.h"


int main(int argc, char **argv)
{
    ConfigFactory factory;

    for (int i = 0; i < 10; i++)
    {
        // half of crawlers have different proxy than the other
        // but if we look at mem-addr of the config objects we'll see there are only two of them
        // (i.e. no unnecessary copies)

        std::string proxy = (i % 2) ? "first-proxy" : "second-proxy";
        std::string website = std::string("website-") + std::to_string(i) + std::string(".com");

        Crawler c(website, &factory);
        c.configure(60, 3, proxy, "admin", "1234");
        c.crawl();
    }

    return 0;
}
