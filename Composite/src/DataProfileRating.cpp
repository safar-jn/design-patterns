#include "DataProfileRating.h"


DataProfileRating::DataProfileRating (double value): _value(value)
{}

size_t DataProfileRating::count () const
{
    return (bool)_value;
}

double DataProfileRating::numerize () const
{
    return _value;
}
