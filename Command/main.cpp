#include "src/Crawler.h"
#include "src/commands/Command.h"
#include "src/commands/ShallowScrapeCommand.h"
#include "src/commands/DeepScrapeCommand.h"

#include <queue>
#include <memory>


void onCrawlerReady (std::shared_ptr<Command> cmd)
{
    // simulate triggering event when crawler is ready
    cmd->execute();
}


int main(int argc, char **argv)
{
    auto crawler = std::make_shared<Crawler>();
    std::queue<std::shared_ptr<Command>> cmdQueue;

    // simulate queueing few commands
    cmdQueue.push(std::make_shared<ShallowScrapeCommand>(crawler, "website-1.com")); // command for shallow crawl
    cmdQueue.push(std::make_shared<DeepScrapeCommand>(crawler, "website-2.com", 1)); // command for deep crawl
    cmdQueue.push(std::make_shared<DeepScrapeCommand>(crawler, "website-2.com", 99)); // command for deep crawl

    // simulate processing the queued commands
    while (!cmdQueue.empty())
    {
        onCrawlerReady(cmdQueue.front());
        cmdQueue.pop();
    }

    return 0;
}
