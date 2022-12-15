#include "DataProfileID.h"


DataProfileID::DataProfileID (std::string name, std::string surname, std::string rc):
    _name(std::move(name)), _surname(std::move(surname)), _rc(std::move(rc))
{}

size_t DataProfileID::count () const
{
    return (int)(!_name.empty()) + (int)(!_surname.empty()) + (int)(!_rc.empty()); // # of non-empty values
}

double DataProfileID::numerize () const
{
    return (int)(!_name.empty() && !_surname.empty() && !_rc.empty()); // if all non-empty then 1 else 0
}
