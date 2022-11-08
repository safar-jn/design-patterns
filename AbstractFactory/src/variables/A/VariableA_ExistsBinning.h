#ifndef DESIGN_PATTERNS_VARIABLEA_EXISTSBINNING_H
#define DESIGN_PATTERNS_VARIABLEA_EXISTSBINNING_H

#include "VariableA.h"


class VariableA_ExistsBinning: public VariableA
{
	public:
			VariableA_ExistsBinning(int value, float factor = 1.0);
		int bin() const;
};


#endif //DESIGN_PATTERNS_VARIABLEA_EXISTSBINNING_H
