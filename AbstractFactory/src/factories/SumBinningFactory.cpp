#include "SumBinningFactory.h"

#include "../variables/A/VariableA_SumBinning.h"
#include "../variables/B/VariableB_SumBinning.h"


std::shared_ptr<VariableA> SumBinningFactory::createVariableA (int value, float factor) const
{
	return std::make_shared<VariableA_SumBinning>(value, factor);
}

std::shared_ptr<VariableB> SumBinningFactory::createVariableB (const std::vector<int> & values) const
{
	return std::make_shared<VariableB_SumBinning>(values);
}
