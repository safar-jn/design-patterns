#include "src/DataProfile.h"

#include <iostream>


int main (int argc, char **argv)
{
    // prep. data
    DataProfile dp;

    dp.insert("clientID", "name", "John");
    dp.insert("clientID", "surname", "Doe");
    dp.insert("clientID", "RC", "123456/7890");

    dp.insert("website", "url", "website-1.com");
    dp.insert("website", "secured", "true");

    std::cout << "-----------ORIGINAL-----------" << std::endl;
    dp.print();

    // ...

    DataProfile::Memento snapshot = dp.save(); // create snapshot

    std::cout << "--------------NEW--------------" << std::endl;
    dp.insert("bad_data", "foo", "bar");
    dp.print();

    std::cout << "-----RESTORED TO ORIGINAL-----" << std::endl;
    dp.restore(snapshot); // restore to original state using snapshot
    dp.print();

    return 0;
}
