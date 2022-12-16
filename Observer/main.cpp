#include <list>
#include <iostream>

#include "src/KafkaConsumer.h"
#include "src/crawlers/FacebookCrawler.h"
#include "src/crawlers/GoogleCrawler.h"
#include "src/crawlers/TradeRegisterCrawler.h"


int main (int argc, char **argv)
{
    // simulate Kafka topic with few messages
    std::list<std::string> dummyTopic = {
            "req-1",
            "req-2",
            "req-3"
    };

    // ---

    // setup observers/subscribers (Crawlers) and producer (KafkaConsumer - produces tasks for crawlers)

    FacebookCrawler fc;
    GoogleCrawler gc;
    TradeRegisterCrawler trc;

    KafkaConsumer kafkaConsumer;

    kafkaConsumer.registerSubscriber(&fc);
    kafkaConsumer.registerSubscriber(&gc);
    kafkaConsumer.registerSubscriber(&trc);

    kafkaConsumer.consumeTopic(dummyTopic); // simulate consuming topic

    return 0;
}
