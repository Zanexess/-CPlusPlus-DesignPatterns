#ifndef COCACOLACOVER_H
#define COCACOLACOVER_H

#include "AbstractCover.h"
#include <iostream>
#include <string>

 

class CocaColaCover : public AbstractCover
{

public:
	CocaColaCover() { name = "CocaColaCover"; } 

	void Interact(AbstractBottle *bottle)
	{
		std::cout << name << " + " << bottle->getName() << std::endl;
	}
};

#endif