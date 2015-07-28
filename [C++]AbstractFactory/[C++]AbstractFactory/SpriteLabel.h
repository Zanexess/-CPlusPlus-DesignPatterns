#ifndef SPRITELABEL_H
#define SPRITELABEL_H

#include "AbstractLabel.h"
#include <iostream>
#include <string>

 

class SpriteLabel : public AbstractLabel
{

public:
	SpriteLabel() { name = "SpriteLabel"; } 

	void Interact(AbstractBottle *bottle)
	{
		std::cout << name << " + " << bottle->getName() << std::endl;
	}
};

#endif
