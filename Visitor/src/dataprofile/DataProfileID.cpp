#include "DataProfileID.h"


DataProfileID::DataProfileID (const std::string &name, const std::string &surname, const std::string &rc):
        _name(name), _surname(surname), _rc(rc)
{}

size_t DataProfileID::count () const
{
    return (int)(!_name.empty()) + (int)(!_surname.empty()) + (int)(!_rc.empty()); // # of non-empty
}

const std::string &DataProfileID::getName () const
{
    return _name;
}

const std::string &DataProfileID::getSurname () const
{
    return _surname;
}

const std::string &DataProfileID::getRc () const
{
    return _rc;
}


void DataProfileID::accept (Exporter *exporter)
{
    exporter->visitDataProfileID(this);
}