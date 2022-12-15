#include "DataProfile.h"


std::ostream& operator << (std::ostream &os, const DataProfile &dp)
{
    os  << "[DataProfile]\n"
        << " |- name: " << dp._name << "\n"
        << " |- surname: " << dp._surname << "\n"
        << " |- birthYear: " << dp._birth_year << "\n"
        << " |- googleRatings: ";

    for (float rating : dp._google_ratings)
        os << rating << ", ";

    os << std::endl;

    return os;
}
