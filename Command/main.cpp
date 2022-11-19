#include <memory>

#include "src/Crawler.h"
#include "src/commands/Command.h"
#include "src/commands/ShallowScrapeCommand.h"
#include "src/commands/DeepScrapeCommand.h"


/// simulate triggering event when crawler is ready
void onCrawlerReady (Command *cmd)
{
    cmd->execute();
}


int main(int argc, char **argv)
{
    std::shared_ptr<Crawler> crawler = std::make_shared<Crawler>();

    std::shared_ptr<Command> cmd_1 = std::make_shared<ShallowScrapeCommand>(crawler.get(), "website-1.com");
    std::shared_ptr<Command> cmd_2 = std::make_shared<DeepScrapeCommand>(crawler.get(), "website-2.com", 1);
    std::shared_ptr<Command> cmd_3 = std::make_shared<DeepScrapeCommand>(crawler.get(), "website-2.com", 99);

    onCrawlerReady(cmd_1.get());
    onCrawlerReady(cmd_2.get());
    onCrawlerReady(cmd_3.get());

    return 0;
}
