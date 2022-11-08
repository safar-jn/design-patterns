#include <iostream>

#include "src/ClientExample.h"

#include "src/factories/ExistsBinningFactory.h"
#include "src/factories/CountBinningFactory.h"
#include "src/factories/SumBinningFactory.h"


int main(int argc, char **argv)
{
	ClientExample c; // entity which uses factories

	std::cout << "ExistsBinningFactory" << std::endl;
	c.setFactory(std::make_shared<ExistsBinningFactory>()); // u can swap factories to get different sets of variables
	c.doSomething();

	std::cout << "CountBinningFactory" << std::endl;
	c.setFactory(std::make_shared<CountBinningFactory>()); // u can swap factories to get different sets of variables
	c.doSomething();

	std::cout << "SumBinningFactory" << std::endl;
	c.setFactory(std::make_shared<SumBinningFactory>()); // u can swap factories to get different sets of variables
	c.doSomething();

	return 0;
}
