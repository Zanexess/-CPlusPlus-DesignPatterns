#ifndef FANTACOVER_H
#define FANTACOVER_H

#include "AbstractCover.h"
#include <iostream>
#include <string>

 

class FantaCover : public AbstractCover
{

public:
	FantaCover() { name = "FantaCover"; } 

	void Interact(AbstractBottle *bottle)
	{
		std::cout << name << " + " << bottle->getName() << std::endl;
	}
};

#endif