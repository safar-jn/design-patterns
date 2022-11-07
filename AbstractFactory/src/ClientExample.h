#ifndef DESIGN_PATTERNS_CLIENT_H
#define DESIGN_PATTERNS_CLIENT_H

#include <memory>

#include "factories/BinningFactory.h"


class ClientExample
{
	public:
		void setFactory(std::shared_ptr<BinningFactory> factory);
		void doSomething() const;
	private:
		std::shared_ptr<BinningFactory> _factory;
};


#endif //DESIGN_PATTERNS_CLIENT_H
