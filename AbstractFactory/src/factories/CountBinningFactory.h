#ifndef DESIGN_PATTERNS_COUNTBINNINGFACTORY_H
#define DESIGN_PATTERNS_COUNTBINNINGFACTORY_H

#include "BinningFactory.h"


class CountBinningFactory: public BinningFactory
{
	public:
		std::shared_ptr<VariableA> createVariableA(int value, float factor) const;
		std::shared_ptr<VariableB> createVariableB(const std::vector<int> &values) const;
};


#endif //DESIGN_PATTERNS_COUNTBINNINGFACTORY_H
