#include "DataProfile.h"


std::ostream & operator << (std::ostream & os, const DataProfile & dp)
{
    os  << "DataProfile\n"
        << "\tname: " << dp._name << "\n"
        << "\tsurname: " << dp._surname << "\n"
        << "\tbirthYear: " << dp._birth_year << "\n"
        << "\tgoogleRatings: ";

    for (float rating : dp._google_ratings)
        os << rating << ", ";

    os << std::endl;

    return os;
}
