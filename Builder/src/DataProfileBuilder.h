#ifndef DESIGN_PATTERNS_DATAPROFILEBUILDER_H
#define DESIGN_PATTERNS_DATAPROFILEBUILDER_H

#include <memory>

#include "DataProfile.h"


class DataProfileBuilder
{
	public:
		DataProfileBuilder();
		DataProfileBuilder & 			reset			();
		DataProfileBuilder & 			setName			(const std::string & name);
		DataProfileBuilder & 			setSurname		(const std::string & surname);
		DataProfileBuilder & 			setBirthYear	(uint16_t birthYear);
		DataProfileBuilder & 			addGoogleRating	(float rating);
		std::shared_ptr<DataProfile>	construct		();
	private:
		std::shared_ptr<DataProfile> _result;
};


#endif //DESIGN_PATTERNS_DATAPROFILEBUILDER_H
