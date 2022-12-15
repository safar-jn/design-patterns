#include "src/DataProfile.h"
#include "src/DataProfileBuilder.h"

#include <memory>
#include <iostream>


int main(int argc, char **argv)
{
    // example of client code that uses Builder pattern to gradually build DataProfile object

    DataProfileBuilder builder;
    std::shared_ptr<DataProfile> result;

    result = builder
                .setName("John")
                .setSurname("Doe")
                .setBirthYear(1999)
                .addGoogleRating(4.5)
                .addGoogleRating(4.9)
                .addGoogleRating(1.0)
                .construct();

    std::cout << *result;

    result = builder
                .reset()
                .setName("Jane")
                .setSurname("Doe")
                .setBirthYear(2005)
                .addGoogleRating(5.1)
                .construct();

    std::cout << *result;

    return 0;
}
