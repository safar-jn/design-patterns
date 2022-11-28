#include "DataProfileRating.h"


DataProfileRating::DataProfileRating (double value): _value(value)
{}

size_t DataProfileRating::count () const
{
    return (bool)_value;
}

double DataProfileRating::getValue () const
{
    return _value;
}

void DataProfileRating::accept (Exporter *exporter)
{
    exporter->visitDataProfile(this);
}
