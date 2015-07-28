#ifndef ABSTRACTLABEL_H
#define ABSTRACTLABEL_H

#include "AbstractBottle.h"

class AbstractLabel
{
protected:
	std::string name;
	
public:
	virtual ~AbstractLabel() { }

	virtual void Interact(AbstractBottle *bottle) = 0;
};

#endif