#ifndef COCACOLALABEL_H
#define COCACOLALABEL_H

#include "AbstractLabel.h"
#include <iostream>
#include <string>

 

class CocaColaLabel : public AbstractLabel
{

public:
	CocaColaLabel() { name = "CocaColaLabel"; } 

	void Interact(AbstractBottle *bottle)
	{
		std::cout << name << " + " << bottle->getName() << std::endl;
	}
};

#endif
