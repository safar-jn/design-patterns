#include "VariableA_CountBinning.h"


VariableA_CountBinning::VariableA_CountBinning (int value, float factor)
{
	_value = value;
	_factor = factor;
}

int VariableA_CountBinning::bin () const
{
	return _value ? 1 : 0;
}
