#ifndef DESIGN_PATTERNS_VARIABLEB_COUNTBINNING_H
#define DESIGN_PATTERNS_VARIABLEB_COUNTBINNING_H

#include "VariableB.h"


class VariableB_CountBinning: public VariableB
{
	public:
			VariableB_CountBinning(std::vector<int> values);
		int bin() const;
};


#endif //DESIGN_PATTERNS_VARIABLEB_COUNTBINNING_H
