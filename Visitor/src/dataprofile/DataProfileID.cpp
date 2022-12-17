#include "DataProfileID.h"


DataProfileID::DataProfileID (std::string name, std::string surname, std::string rc):
        _name(std::move(name)), _surname(std::move(surname)), _rc(std::move(rc))
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
    // invoke functionality (i.e. export DataProfileID) provided by corresponding visitor (i.e. exporter)
    exporter->visitDataProfile(this);
}