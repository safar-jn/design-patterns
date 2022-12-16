#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include <string>


/// common interface for all observers/subscribers
class Crawler
{
    public:
        virtual void update (const std::string &request) = 0; // react on update from producer (KafkaConsumer)
};


#endif //DESIGN_PATTERNS_CRAWLER_H
