#ifndef ABSTRACTCOVER_H
#define ABSTRACTCOVER_H


#include "AbstractBottle.h"

class AbstractCover
{
protected:
	std::string name;

public:
	virtual ~AbstractCover() {}

	virtual void Interact(AbstractBottle *bottle) = 0;
};

#endif