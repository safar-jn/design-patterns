#include "src/Crawler.h"


int main (int argc, char **argv)
{
    /// crawlers == active objects
    Crawler gg;
    Crawler fb;
    Crawler zr;

    /// we can register new tasks from anywhere without any need for additional synchronization
    /// and these task will be executed concurrently in different threads (one thread per crawler)
    ///
    /// NOTE: to test we can run time command
    ///     - crawl() method simulates 1s delay
    ///     - there are 9 calls to crawl(), but always only 3 per crawler
    ///     - so each crawler should take 3s to finish and because they run simultaneously so should whole main()
    gg.crawl("google.com/search?q=foo");
    gg.crawl("google.com/search?q=bar");
    gg.crawl("google.com/search?q=fizz");
    fb.crawl("facebook.com/johndoe3");
    fb.crawl("facebook.com/jhn.doe");
    fb.crawl("facebook.com/doe42");
    zr.crawl("rzp.cz/cgi-bin/aps_cacheWEB.sh?JMENO=john&PRIJMENI=doe");
    zr.crawl("rzp.cz/cgi-bin/aps_cacheWEB.sh?JMENO=jane&PRIJMENI=doe");
    zr.crawl("rzp.cz/cgi-bin/aps_cacheWEB.sh?JMENO=john&PRIJMENI=smith");

    /// just for cleanup
    gg.terminate();
    fb.terminate();
    zr.terminate();

    return 0;
}