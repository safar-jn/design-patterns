#include <iostream>

#include "src/Crawler.h"


void run_crawler(const std::string &website, bool log = false)
{
    Crawler c(website, log);
    c.start();
}


int main(int argc, char **argv)
{
    run_crawler("some-very-important-website.com", true); // this object will init DWH conn, 'cause it needs it

    run_crawler("some-unimportant-website.com"); // this object won't init DWH conn, 'cause it doesn't need it

	return 0;
}
