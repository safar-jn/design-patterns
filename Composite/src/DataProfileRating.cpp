#include "DataProfileRating.h"


DataProfileRating::DataProfileRating (double value): _value(value)
{}

size_t DataProfileRating::count () const
{
    return _value == 0.0 ? 0 : 1;
}

double DataProfileRating::numerize () const
{
    return _value;
}
