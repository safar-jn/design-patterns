#ifndef DESIGN_PATTERNS_KAFKACONSUMER_H
#define DESIGN_PATTERNS_KAFKACONSUMER_H


#include "crawlers/Crawler.h"

#include <set>
#include <list>
#include <thread>
#include <iostream>


/// producer - simulates consuming messages from Kafka topic and then notifies observers/subscribers (Crawlers)
class KafkaConsumer
{
    public:
        void consumeTopic (const std::list<std::string> &dummy_topic) const;
        // ...
        void registerSubscriber   (Crawler *crawler);
        void deregisterSubscriber (Crawler *crawler);
        void notifySubscribers    (const std::string &msg) const;
    private:
        std::set<Crawler*> _subscribers;
};


#endif //DESIGN_PATTERNS_KAFKACONSUMER_H
