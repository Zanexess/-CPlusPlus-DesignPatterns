#ifndef CONCRETECREATOR_H
#define CONCRETECREATOR_H

#include "Creator.h"
#include "Product.h"
#include "ConcreteProduct.h"
#include <string>

class MeatCreator: public Creator
{
public: 
	Product* FactoryMethod()
	{
		return new Meat();
	}
};



#endif