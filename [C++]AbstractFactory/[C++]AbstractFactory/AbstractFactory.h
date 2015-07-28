#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "AbstractWater.h"
#include "AbstractBottle.h"
#include "AbstractCover.h"
#include "AbstractLabel.h"


class AbstractFactory
{
public: 
	virtual AbstractBottle* CreateBottle() const = 0;
	virtual AbstractWater* CreateWater() const = 0;
	virtual AbstractLabel* CreateLable() const = 0;
	virtual AbstractCover* CreateCover() const = 0;
	virtual ~AbstractFactory() {}
};

#endif 
