#include <iostream>

#include "src/DataProfile.h"


int main (int argc, char **argv)
{
    DataProfile dp;

    dp.insert("clientID", "name", "John");
    dp.insert("clientID", "surname", "Doe");
    dp.insert("clientID", "RC", "123456/7890");

    dp.insert("website", "url", "website-1.com");
    dp.insert("website", "secured", "true");

    std::cout << "---ORIGINAL---" << std::endl;
    dp.print();

    // ...

    DataProfile::Memento snapshot = dp.save();

    std::cout << "---NEW---" << std::endl;
    dp.insert("bad_data", "foo", "bar");
    dp.print();

    std::cout << "---RESTORED TO ORIGINAL---" << std::endl;
    dp.restore(snapshot);
    dp.print();

    return 0;
}
