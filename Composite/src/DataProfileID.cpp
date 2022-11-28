#include "DataProfileID.h"


DataProfileID::DataProfileID (const std::string &name, const std::string &surname, const std::string &rc):
    _name(name), _surname(surname), _rc(rc)
{}

size_t DataProfileID::count () const
{
    return (int)(!_name.empty()) + (int)(!_surname.empty()) + (int)(!_rc.empty()); // # of non-empty
}

double DataProfileID::numerize () const
{
    return (int)(!_name.empty() && !_surname.empty() && !_rc.empty()); // if all non-empty then 1 else 0
}
