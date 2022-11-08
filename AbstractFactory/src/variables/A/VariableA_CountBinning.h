#ifndef DESIGN_PATTERNS_VARIABLEA_COUNTBINNING_H
#define DESIGN_PATTERNS_VARIABLEA_COUNTBINNING_H

#include "VariableA.h"


class VariableA_CountBinning: public VariableA
{
	public:
			VariableA_CountBinning(int value, float factor = 1.0);
		int bin() const;
};


#endif //DESIGN_PATTERNS_VARIABLEA_COUNTBINNING_H
