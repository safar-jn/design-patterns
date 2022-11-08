#ifndef DESIGN_PATTERNS_BINNINGFACTORY_H
#define DESIGN_PATTERNS_BINNINGFACTORY_H

#include "../variables/A/VariableA.h"
#include "../variables/B/VariableB.h"

#include <memory>


class BinningFactory
{
	public:
		virtual std::shared_ptr<VariableA> createVariableA(int value, float factor) const = 0;
		virtual std::shared_ptr<VariableB> createVariableB(const std::vector<int> &values) const = 0;
};


#endif //DESIGN_PATTERNS_BINNINGFACTORY_H
