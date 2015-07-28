#ifndef SPRITEBOTTLE_H
#define SPRITEBOTTLE_H

#include "AbstractBottle.h"
#include <iostream>
#include <typeinfo>
#include <string>

 

class SpriteBottle : public AbstractBottle
{
public:
	SpriteBottle() { name = "SpriteBottle"; } 

	void Interact(AbstractWater *water)
	{		
		std::cout << name << " + " << water->getName() << std::endl;
	}
};

#endif
