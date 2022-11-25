#include "Crawler.h"


/// during Crawler init create&start new internal thread
Crawler::Crawler (): _worker(std::thread(&Crawler::executeTask, this)), _run(true)
{}

void Crawler::terminate ()
{
    _run = false;
    _tasks.enqueue(""); // so the _worker thread won't stay stuck on _tasks.dequeue() when queue is empty
    _worker.join();
}

void Crawler::crawl (const std::string &website)
{
    /// register new crawling task
    _tasks.enqueue(website);
}

void Crawler::executeTask ()
{
    while (_run || _tasks.size())
    {
        std::string website = _tasks.dequeue();
        /// crawl through the website
        if (!website.empty())
            std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // simulating work
    }
}
