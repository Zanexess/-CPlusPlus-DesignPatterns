#ifndef COCACOLABOTTLE_H
#define COCACOLABOTTLE_H

#include "AbstractBottle.h"
#include <iostream>
#include <typeinfo>
#include <string>

 

class CocaColaBottle : public AbstractBottle
{
public:
	CocaColaBottle() { name = "CocaColaBottle"; } 

	void Interact(AbstractWater *water)
	{		
		std::cout << name << " + " << water->getName() << std::endl;
	}
};

#endif
