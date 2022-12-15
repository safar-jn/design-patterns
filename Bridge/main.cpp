#include "src/abstractions/CacheHandler.h"
#include "src/implementations/OracleDatabase.h"
#include "src/implementations/PostgresDatabase.h"

#include <memory>


void simulateClient (const std::shared_ptr<CacheHandler> &cacheHandler)
{
    // simulate some client code that uses CacheHandler for caching results
    //   - as we can see, the client is completely oblivious to which DB technology is used in the handler

    cacheHandler->cacheScore("client_id_1", "56.78");
    // ...
}


int main (int argc, char **argv)
{
    auto cacheHandler = std::make_shared<CacheHandler>();

    // simulate handler using Oracle connector
    auto oracleConn = std::make_shared<OracleDatabase>();
    cacheHandler->setConnection(oracleConn);
    simulateClient(cacheHandler);

    // simulate handler using Postgres connector
    auto postgresConn = std::make_shared<PostgresDatabase>();
    cacheHandler->setConnection(postgresConn);
    simulateClient(cacheHandler);

    return 0;
}
