#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include <thread>
#include <string>
#include <list>


/// SLAVE - does most of the actual heavy lifting
class Crawler
{
    public:
        void        crawl     (const std::string &website);
        std::string getResult ();
    private:
        std::string _result;
        std::thread _worker;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
