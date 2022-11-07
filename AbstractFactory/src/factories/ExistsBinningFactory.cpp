#include "ExistsBinningFactory.h"

#include "../variables/A/VariableA_ExistsBinning.h"
#include "../variables/B/VariableB_ExistsBinning.h"


std::shared_ptr<VariableA> ExistsBinningFactory::createVariableA (int value, float factor) const
{
	return std::make_shared<VariableA_ExistsBinning>(value, factor);
}

std::shared_ptr<VariableB> ExistsBinningFactory::createVariableB (const std::vector<int> & values) const
{
	return std::make_shared<VariableB_ExistsBinning>(values);
}
