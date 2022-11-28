#include "src/dataprofile/DataProfileID.h"
#include "src/dataprofile/DataProfileRating.h"
#include "src/dataprofile/DataProfileSection.h"
#include "src/exporters/XMLExporter.h"

#include <iostream>


void simulateExport (const std::shared_ptr<DataProfile> &dp, const std::shared_ptr<Exporter> &exporter)
{
    // ...
    dp->accept(exporter.get());
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

    auto XMLexporter = std::make_shared<XMLExporter>();
    simulateExport(dp, XMLexporter);

    return 0;
}
