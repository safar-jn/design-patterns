#include <iostream>

#include "ClientExample.h"

#include "variables/A/VariableA.h"
#include "variables/B/VariableB.h"


void ClientExample::setFactory (std::shared_ptr<BinningFactory> factory)
{
	_factory = factory;
}

void ClientExample::doSomething () const
{
	// simulate some work with Variables

	std::shared_ptr<VariableA> varA = _factory->createVariableA(42, 3.7);
	std::shared_ptr<VariableB> varB = _factory->createVariableB({1, 2, 3, 256, 5, 512, 7, 8, 9, 10, 11});

	std::cout << "- varA bin(): " << varA->bin() << std::endl; // call to corresponding bin() based on used factory
	std::cout << "- varB bin(): " << varB->bin() << std::endl; // call to corresponding bin() based on used factory
}