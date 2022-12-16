#include "Crawler.h"


void Crawler::crawl (const std::string &website)
{
    // simulate some workload (done in a separate thread)
    _worker = std::thread([=]
        {
            std::cout << (" |- [Crawler] | start crawling '" + website + "'\n");

            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            _result = "<html>" + website + "...</html>";

            std::cout << (" |- [Crawler] | finish crawling '" + website + "'\n");
        }
    );
}

std::string Crawler::getResult ()
{
    // wait for worker thread to finish before returning result
    _worker.join();
    return _result;
}
