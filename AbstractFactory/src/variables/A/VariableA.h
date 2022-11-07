#ifndef DESIGN_PATTERNS_VARIABLEA_H
#define DESIGN_PATTERNS_VARIABLEA_H


class VariableA
{
	public:
		virtual int bin() const = 0;
	protected:
		int 	_value;
		float 	_factor;
};


#endif //DESIGN_PATTERNS_VARIABLEA_H
