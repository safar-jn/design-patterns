#include "ScraperCore.h"


std::list<std::string> ScraperCore::scrapeClient (const std::string &clientName, const std::string &clientSurname)
{
    // simulate the flow of scraping client's data
    // - most importantly delegate the actual work to slaves and splice together all the results

    std::cout << "[ScraperCore] | accept request for [" << clientName << ", " << clientSurname << "]\n";

    std::list<std::string> tmpResults;

    scrapeSearchEngines(clientName, clientSurname);
    tmpResults.splice(tmpResults.end(), collectResults(clientName, clientSurname));

    scrapePersonalWebsite(clientName + clientSurname + ".com"); // in reality, we'd extract the website from scraped search engine results
    tmpResults.splice(tmpResults.end(), collectResults(clientName, clientSurname));

    std::cout << "[ScraperCore] | finish request for [" << clientName << ", " << clientSurname << "]" << std::endl;

    return tmpResults;
}

void ScraperCore::scrapeSearchEngines (const std::string &clientName, const std::string &clientSurname)
{
    // simulate running slaves for scraping search engines

    std::string clientID = clientName + clientSurname;
    auto it = _slaves.insert(std::pair<std::string, std::list<Crawler*>>(clientID, {}));

    for (const auto &source : {"google.com", "seznam.cz", "yahoo.com", "duckduckgo.com"})
    {
        auto c = new Crawler;
        it.first->second.push_back(c);
        c->crawl(std::string(source) + "/search?q=" + clientID);
    }
}

void ScraperCore::scrapePersonalWebsite (const std::string &website)
{
    // simulate running slaves for scraping personal website

    std::string clientID = website.substr(0, website.size() - 4);
    auto crawler = new Crawler;

    _slaves.insert(std::pair<std::string, std::list<Crawler*>>(clientID, {crawler}));
    crawler->crawl(website);
}

std::list<std::string> ScraperCore::collectResults (const std::string &clientName, const std::string &clientSurname)
{
    // simulate collecting results from slaves

    std::string clientID = clientName + clientSurname;
    std::list<std::string> results;

    for (auto slave : _slaves.find(clientID)->second)
    {
        results.push_back(slave->getResult());
        delete slave;
    }

    _slaves.erase(clientID);
    return results;
}
