#include "src/DataProfile.h"
#include "src/DataProfileID.h"
#include "src/DataProfileRating.h"
#include "src/DataProfileSection.h"

#include <iostream>


void simulateClient (const std::shared_ptr<DataProfile> &dp)
{
    // simulate work with the complex structure (DataProfile)
    //   - as we can see, the client can be absolutely oblivious to the exact element of the structure
    //     he is working with
    //   - work "end objects" (DataProfileID, DataProfileRating, ...) as well as nested ones (DataProfileSection)
    //     is always the same

    std::cout << "[Client]" << std::endl;
    std::cout << " |- # of elements in DP: " << dp->count() << std::endl;
    std::cout << " |- Numeric value of DP: " << dp->numerize() << std::endl;
    // ...
}


int main (int argc, char **argv)
{
    // simulate construction of the complex structure (DataProfile)

    auto dp = std::make_shared<DataProfileSection>("data_profile"); // recursive element
    auto dpID = std::make_shared<DataProfileID>("john", "doe", "123456/7890"); // "end object" element
    auto dpRatings = std::make_shared<DataProfileSection>("google_ratings"); // recursive element

    dpRatings->add(std::make_shared<DataProfileRating>(3.58)); // nesting "end object" element under recursive element
    dpRatings->add(std::make_shared<DataProfileRating>(4.20)); // nesting "end object" element under recursive element
    dpRatings->add(std::make_shared<DataProfileRating>(4.10)); // nesting "end object" element under recursive element

    dp->add(dpID); // nesting "end object" element under recursive element
    dp->add(dpRatings); // nesting recursive element under recursive element

    simulateClient(dp);

    // ---

    auto dpID_2 = std::make_shared<DataProfileID>("jane", "doe", ""); // "end object" element

    dp->rmv(dpID); // removing nested element from structure
    dp->add(dpID_2); // nesting "end object" element under recursive element

    simulateClient(dp);

    return 0;
}
