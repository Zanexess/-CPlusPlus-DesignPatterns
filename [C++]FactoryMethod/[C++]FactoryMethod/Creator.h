#ifndef CREATOR_H
#define CREATOR_H

#include "Product.h"
#include <iostream>
#include <string>


class Creator
{
private:
	Product *product;

public:
	virtual Product* FactoryMethod() = 0;
	void AnOperation()
	{
		product = FactoryMethod();
	}
	void info()
	{
		std::cout << product->getName() << std::endl;
	}
	
	virtual ~Creator() {} 
};


#endif