#include "Crawler.h"


void Crawler::crawl (const std::string &website)
{
    /// simulate some workload done in a separate thread

    _worker = std::thread([=]
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            _result = "<html>" + website + "...</html>";
        }
    );
}

std::string Crawler::getResult ()
{
    _worker.join();
    return _result;
}
