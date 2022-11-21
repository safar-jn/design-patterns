#include "KafkaConsumer.h"


void KafkaConsumer::consumeTopic (const std::list<std::string> &dummy_topic) const
{
    /// simulate consuming messages from Kafka (and with each msg updating subs)

    for (const auto &dummy_msg : dummy_topic)
    {
        std::cout << "[KafkaConsumer] | consumed '" << dummy_msg << "'" << std::endl;
        notifySubscribers(dummy_msg);

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void KafkaConsumer::registerSubscriber (Crawler *crawler)
{
    _subscribers.insert(crawler);
}

void KafkaConsumer::deregisterSubscriber (Crawler *crawler)
{
    _subscribers.erase(crawler);
}

void KafkaConsumer::notifySubscribers (const std::string &msg) const
{
    for (const auto &sub : _subscribers)
        sub->update(msg);
}
