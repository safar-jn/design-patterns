#include "PostgresDatabase.h"


void PostgresDatabase::createConnection (const std::string &uri, const std::string &usr, const std::string &pwd)
{
    /// simulate connecting to Postgres DB
    std::cout   << "[PostgresDatabase] | connecting to Postgres DB '"
                << uri
                << "' using '"
                << usr << ":"
                << pwd
                << "'"
                << std::endl;
}

std::string PostgresDatabase::selectScore (const std::string &clientID)
{
    /// simulate selecting cached result from Postgres DB
    std::cout   << "[PostgresDatabase] | executing 'select ... where clientID="
                << clientID
                << ";' in Postgres DB"
                << std::endl;

    srand(time(0));
    return (rand() % 100 < 50) ? "" : "12.34";
}

void PostgresDatabase::updateScore (const std::string &clientID, const std::string &score)
{
    /// simulate updating cached result in Postgres DB
    std::cout   << "[PostgresDatabase] | executing 'update set score="
                << score
                << " where clientID="
                << clientID
                << ";' in Postgres DB"
                << std::endl;
}

void PostgresDatabase::insertScore (const std::string &clientID, const std::string &score)
{
    /// simulate inserting new result in Postgres DB
    std::cout   << "[PostgresDatabase] | executing 'insert into cache values ("
                << clientID
                << ", "
                << score
                << ", ...);"
                << std::endl;
}
