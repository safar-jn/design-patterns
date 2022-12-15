#include "VariableB_CountBinning.h"


VariableB_CountBinning::VariableB_CountBinning (std::vector<int> values)
{
	_values = std::move(values);
}

int VariableB_CountBinning::bin () const
{
    // simulate binning by counting number of values

    size_t count = _values.size();

	if (count > 100) // 100+
		return 3;

	if (count > 10)	// (10,100>
		return 2;

	if (count > 0)	// (0;10>
		return 1;

	return 0; // 0
}
