#include "VariableB_SumBinning.h"

#include <numeric>
#include <cmath>


VariableB_SumBinning::VariableB_SumBinning (std::vector<int> values)
{
	_values = std::move(values);
}

int VariableB_SumBinning::bin () const
{
    // simulate binning by value summation

    int sum = std::accumulate(
		_values.begin(),
		_values.end(),
		0,
		[] (int first, int second) {return first + second;}
	);

	return sum > 999 ? 10 : std::floor(sum / 100);
}
