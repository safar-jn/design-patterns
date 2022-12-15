#ifndef DESIGN_PATTERNS_VARIABLEB_H
#define DESIGN_PATTERNS_VARIABLEB_H

#include <vector>


/// interface for all variations of VariableB objects
class VariableB
{
	public:
		virtual int bin() const = 0;
	protected:
		std::vector<int> _values;
};


#endif //DESIGN_PATTERNS_VARIABLEB_H
