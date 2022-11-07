#ifndef DESIGN_PATTERNS_VARIABLEA_SUMBINNING_H
#define DESIGN_PATTERNS_VARIABLEA_SUMBINNING_H

#include "VariableA.h"


class VariableA_SumBinning: public VariableA
{
	public:
			VariableA_SumBinning(int value, float factor = 1.0);
		int bin() const;
};


#endif //DESIGN_PATTERNS_VARIABLEA_SUMBINNING_H
