#include "src/DataProfile.h"
#include "src/DataProfileID.h"
#include "src/DataProfileRating.h"
#include "src/DataProfileSection.h"

#include <iostream>


void simulateClient (const std::shared_ptr<DataProfile> &dp)
{
    // ...
    std::cout << "[Client]" << std::endl;
    std::cout << " |- # of elements in DP: " << dp->count() << std::endl;
    std::cout << " |- Numeric value of DP: " << dp->numerize() << std::endl;
    // ...
}


int main (int argc, char **argv)
{
    auto dp = std::make_shared<DataProfileSection>("data_profile");
    auto dpID = std::make_shared<DataProfileID>("john", "doe", "123456/7890");
    auto dpRatings = std::make_shared<DataProfileSection>("google_ratings");

    dpRatings->add(std::make_shared<DataProfileRating>(3.58));
    dpRatings->add(std::make_shared<DataProfileRating>(4.20));
    dpRatings->add(std::make_shared<DataProfileRating>(4.10));

    dp->add(dpID);
    dp->add(dpRatings);

    simulateClient(dp);

    // ---

    auto dpID_2 = std::make_shared<DataProfileID>("jane", "doe", "");

    dp->rmv(dpID);
    dp->add(dpID_2);

    simulateClient(dp);

    return 0;
}
