#include "VariableA_ExistsBinning.h"


VariableA_ExistsBinning::VariableA_ExistsBinning (int value, float factor)
{
	_value = value;
	_factor = factor;
}

int VariableA_ExistsBinning::bin () const
{
    // simulate binning by value existence
	return _value ? 1 : 0;
}
