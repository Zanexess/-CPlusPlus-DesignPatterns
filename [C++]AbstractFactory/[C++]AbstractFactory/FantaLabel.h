#ifndef FANTALABEL_H
#define FANTALABEL_H

#include "AbstractLabel.h"
#include <iostream>
#include <string>

 

class FantaLabel : public AbstractLabel
{

public:
	FantaLabel() { name = "FantaLabel"; } 

	void Interact(AbstractBottle *bottle)
	{
		std::cout << name << " + " << bottle->getName() << std::endl;
	}
};

#endif
