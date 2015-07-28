#ifndef SPRITECOVER_H
#define SPRITECOVER_H

#include "AbstractCover.h"
#include <iostream>
#include <string>

 

class SpriteCover : public AbstractCover
{

public:
	SpriteCover() { name = "SpriteCover"; } 

	void Interact(AbstractBottle *bottle)
	{
		std::cout << name << " + " << bottle->getName() << std::endl;
	}
};

#endif