#ifndef ABSTRACTBOTTLE_H
#define ABSTRACTBOTTLE_H

#include "AbstractWater.h"

class AbstractBottle
{

protected:
	std::string name;
public:
	virtual ~AbstractBottle() {} 
	std::string getName()
	{
		return name;
	}
	virtual void Interact(AbstractWater *water) = 0;
};

#endif