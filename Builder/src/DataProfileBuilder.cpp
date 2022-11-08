#include "DataProfileBuilder.h"


DataProfileBuilder::DataProfileBuilder (): _result(std::make_shared<DataProfile>())
{}

DataProfileBuilder & DataProfileBuilder::reset ()
{
	_result = std::make_shared<DataProfile>();
	return *this;
}

DataProfileBuilder & DataProfileBuilder::setName (const std::string & name)
{
	_result->_name = name;
	return *this;
}

DataProfileBuilder & DataProfileBuilder::setSurname (const std::string & surname)
{
	_result->_surname = surname;
	return *this;
}

DataProfileBuilder & DataProfileBuilder::setBirthYear (uint16_t birthYear)
{
	_result->_birth_year = birthYear;
	return *this;
}

DataProfileBuilder & DataProfileBuilder::addGoogleRating (float rating)
{
	_result->_google_ratings.push_back(rating);
	return *this;
}

std::shared_ptr<DataProfile> DataProfileBuilder::construct ()
{
	return _result;
}
