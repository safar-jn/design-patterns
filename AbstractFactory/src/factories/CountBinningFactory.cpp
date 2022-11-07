#include "CountBinningFactory.h"

#include "../variables/A/VariableA_CountBinning.h"
#include "../variables/B/VariableB_CountBinning.h"


std::shared_ptr<VariableA> CountBinningFactory::createVariableA (int value, float factor) const
{
	return std::make_shared<VariableA_CountBinning>(value, factor);
}

std::shared_ptr<VariableB> CountBinningFactory::createVariableB (const std::vector<int> & values) const
{
	return std::make_shared<VariableB_CountBinning>(values);
}
