#include "VariableB_ExistsBinning.h"


VariableB_ExistsBinning::VariableB_ExistsBinning (std::vector<int> values)
{
	_values = std::move(values);
}

int VariableB_ExistsBinning::bin () const
{
	return _values.size() ? 1 : 0;
}
