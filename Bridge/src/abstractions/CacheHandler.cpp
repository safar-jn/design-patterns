#include "CacheHandler.h"


void CacheHandler::setConnection (Database *conn)
{
    _conn = conn;
}

void CacheHandler::cacheScore (const std::string &clientID, const std::string &score)
{
    /// simulate caching newly calculated score

    _conn->createConnection("localhost:8080", "admin", "1234");

    if (_conn->selectScore(clientID).empty())
        _conn->insertScore(clientID, score);
    else
        _conn->updateScore(clientID, score);
}
