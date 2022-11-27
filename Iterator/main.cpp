#include <iostream>

#include "src/DataProfile.h"
#include "src/DataProfileIterator.h"


int main (int argc, char **argv)
{
    DataProfile dp;

    dp.insert("clientID", "name", "John");
    dp.insert("clientID", "surname", "Doe");
    dp.insert("clientID", "RC", "123456/7890");

    dp.insert("website", "url", "website-1.com");
    dp.insert("website", "secured", "true");

    // ...

    // iterate over entries in data profile
    for (const auto &it: dp)
    {
        std::cout << it.stringify() << std::endl;
    }

    return 0;
}
