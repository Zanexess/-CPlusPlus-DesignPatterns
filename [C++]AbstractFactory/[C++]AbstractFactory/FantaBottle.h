#ifndef FANTABOTTLE_H
#define FANTABOTTLE_H

#include "AbstractBottle.h"
#include <iostream>
#include <typeinfo>
#include <string>

 

class FantaBottle : public AbstractBottle
{
public:
	FantaBottle() { name = "FantaBottle"; } 

	void Interact(AbstractWater *water)
	{		
		std::cout << name << " + " << water->getName() << std::endl;
	}
};

#endif
