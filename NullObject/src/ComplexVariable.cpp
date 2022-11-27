#include "ComplexVariable.h"


ComplexVariable::ComplexVariable (const std::string &id, const std::vector<int> &values): Variable(id), _values(values)
{}

double ComplexVariable::getValue () const
{
    /// simulate returning avg value
    double avg = std::reduce(_values.begin(), _values.end()) / _values.size();

    std::cout << "using: [ComplexVariable] " << getId() << "=" << avg << std::endl;

    return avg;
}
