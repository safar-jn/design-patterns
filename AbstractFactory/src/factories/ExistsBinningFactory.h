#ifndef DESIGN_PATTERNS_EXISTSBINNINGFACTORY_H
#define DESIGN_PATTERNS_EXISTSBINNINGFACTORY_H

#include "BinningFactory.h"


/// concrete factory that creates one exact variation of Variable object ("ExistsBinning" variation)
class ExistsBinningFactory: public BinningFactory
{
	public:
		std::shared_ptr<VariableA> createVariableA (int value, float factor) const;
		std::shared_ptr<VariableB> createVariableB (const std::vector<int> &values) const;
};


#endif //DESIGN_PATTERNS_EXISTSBINNINGFACTORY_H
