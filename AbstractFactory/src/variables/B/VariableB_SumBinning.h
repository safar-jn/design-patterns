#ifndef DESIGN_PATTERNS_VARIABLEB_SUMBINNING_H
#define DESIGN_PATTERNS_VARIABLEB_SUMBINNING_H

#include "VariableB.h"


class VariableB_SumBinning: public VariableB
{
	public:
			VariableB_SumBinning(std::vector<int> values);
		int bin() const;
};


#endif //DESIGN_PATTERNS_VARIABLEB_SUMBINNING_H
