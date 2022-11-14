#ifndef DESIGN_PATTERNS_NEWDUMMYCRAWLER_H
#define DESIGN_PATTERNS_NEWDUMMYCRAWLER_H


#include <string>
#include <iostream>


/// simulate crawlers provided by some third-party library (newly used by scraper)
class NewDummyCrawler
{
    public:
        void        execute         (const std::string &website, uint16_t timeout, uint8_t retry_count);
        std::string getResult       () const;
    protected:
        std::string _result;
};


#endif //DESIGN_PATTERNS_NEWDUMMYCRAWLER_H
