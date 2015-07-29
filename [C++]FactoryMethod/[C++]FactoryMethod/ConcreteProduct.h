#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H

#include "Product.h"
#include <string>

class Meat : public Product
{
public:
	Meat() { }

	std::string getName()
	{
		return this->name;
	}

	
};

#endif