#ifndef DESIGN_PATTERNS_OLDDUMMYCRAWLER_H
#define DESIGN_PATTERNS_OLDDUMMYCRAWLER_H


#include <string>
#include <iostream>


/// simulate crawlers provided by some third-party library (originally used by scraper)
class OldDummyCrawler
{
    public:
        virtual void        setTimeout      (uint16_t timeout);
        virtual void        setRetryCount   (uint8_t retry_count);
        virtual void        setWebsite      (const std::string &website);
        virtual std::string crawl           ();
        // ...
    protected:
        uint16_t    _timeout = 0;
        uint8_t     _retry_count = 0;
        std::string _website;
};


#endif //DESIGN_PATTERNS_OLDDUMMYCRAWLER_H
