#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "ThreadSafeQueue.h"
#include "ThreadSafeQueue.cpp"

#include <string>
#include <thread>
#include <iostream>


/// active object -> starts its own internal thread which executes registered tasks
class Crawler
{
    public:
             Crawler   ();
        void terminate ();
        void crawl     (const std::string &website);
    private:
        void executeTask ();

        ThreadSafeQueue<std::string> _tasks;
        bool                         _run;
        std::thread                  _worker;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
