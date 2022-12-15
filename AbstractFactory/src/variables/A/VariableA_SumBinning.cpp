#include "VariableA_SumBinning.h"


VariableA_SumBinning::VariableA_SumBinning (int value, float factor)
{
	_value = value;
	_factor = factor;
}

int VariableA_SumBinning::bin () const
{
    // simulate binning by value summation

    float sum = _value * _factor;

	if (sum > 13)
		return 2;

	if (sum > 0)
		return 1;

	return 0;
}
