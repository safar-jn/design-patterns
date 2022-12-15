#include "DataProfileBuilder.h"


DataProfileBuilder::DataProfileBuilder (): _result(std::make_shared<DataProfile>())
{}

DataProfileBuilder& DataProfileBuilder::reset ()
{
    // reset _result - i.e. the object that's under construction

    std::cout << "[DataProfileBuilder] | resetting builder progress" << std::endl;
    _result = std::make_shared<DataProfile>();
    return *this;
}

DataProfileBuilder& DataProfileBuilder::setName (std::string name)
{
    std::cout << "[DataProfileBuilder] | adding name='" << name << "' to current object" << std::endl;
    _result->_name = std::move(name);
    return *this;
}

DataProfileBuilder& DataProfileBuilder::setSurname (std::string surname)
{
    std::cout << "[DataProfileBuilder] | adding surname='" << surname << "' to current object" << std::endl;
    _result->_surname = std::move(surname);
    return *this;
}

DataProfileBuilder& DataProfileBuilder::setBirthYear (uint16_t birthYear)
{
    std::cout << "[DataProfileBuilder] | adding birthYear='" << (int)birthYear << "' to current object" << std::endl;
    _result->_birth_year = birthYear;
    return *this;
}

DataProfileBuilder& DataProfileBuilder::addGoogleRating (float rating)
{
    std::cout << "[DataProfileBuilder] | adding googleRating='" << rating << "' to current object" << std::endl;

    if (rating < 0.0 || rating > 5.0)
    {
        std::cerr << "[DataProfileBuilder] | rating not added - must be in range <0.0;5.0>" << std::endl;
        return *this;
    }

    _result->_google_ratings.push_back(rating);
    return *this;
}

std::shared_ptr<DataProfile> DataProfileBuilder::construct ()
{
    std::cout << "[DataProfileBuilder] | returning current object" << std::endl;
    return _result;
}
