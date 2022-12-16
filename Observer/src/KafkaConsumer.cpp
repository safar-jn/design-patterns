#include "KafkaConsumer.h"


void KafkaConsumer::consumeTopic (const std::list<std::string> &dummy_topic) const
{
    // simulate consuming messages from Kafka (and with each msg updating subs)

    for (const auto &dummy_msg : dummy_topic)
    {
        std::cout << "[KafkaConsumer] | consumed '" << dummy_msg << "'" << std::endl;
        notifySubscribers(dummy_msg);

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void KafkaConsumer::registerSubscriber (Crawler *crawler)
{
    // add new observer/subscriber that wants to be notified
    _subscribers.insert(crawler);
}

void KafkaConsumer::deregisterSubscriber (Crawler *crawler)
{
    // remove observer/subscriber that wanted to be notified
    _subscribers.erase(crawler);
}

void KafkaConsumer::notifySubscribers (const std::string &msg) const
{
    // notify all registered observers/subscribers

    std::cout << " |- notifying subs about '" << msg << "'" << std::endl;

    for (const auto &sub : _subscribers)
        sub->update(msg);
}
