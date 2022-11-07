#ifndef DESIGN_PATTERNS_VARIABLEB_EXISTSBINNING_H
#define DESIGN_PATTERNS_VARIABLEB_EXISTSBINNING_H

#include "VariableB.h"


class VariableB_ExistsBinning: public VariableB
{
	public:
			VariableB_ExistsBinning(std::vector<int> values);
		int bin() const;
};


#endif //DESIGN_PATTERNS_VARIABLEB_EXISTSBINNING_H
