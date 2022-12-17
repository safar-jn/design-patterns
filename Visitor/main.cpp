#include "src/dataprofile/DataProfileID.h"
#include "src/dataprofile/DataProfileRating.h"
#include "src/dataprofile/DataProfileSection.h"
#include "src/exporters/XMLExporter.h"

#include <iostream>


void simulateExport (DataProfile *dp, Exporter &exporter)
{
    // simulate using exporter (in this case XML exporter) to generate DataProfile export (in this case in XML)

    std::cout << "[main] | triggering exporter to generate export\n" << std::endl;

    dp->accept(&exporter);
    // ...

    std::cout << std::endl;
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

    // ---

    // simulate visitor (i.e. Exporter) usage
    XMLExporter xmlExporter;
    simulateExport(dp.get(), xmlExporter);

    return 0;
}
