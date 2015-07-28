#ifndef FANTAFACTORY_H
#define FANTAFACTORY_H

#include "AbstractFactory.h"
#include "FantaBottle.h"
#include "FantaWater.h"
#include "FantaLabel.h"
#include "FantaCover.h"

class FantaFactory : public AbstractFactory
{
public:
	AbstractBottle* CreateBottle() const
	{
		return new FantaBottle();
	}
	AbstractWater* CreateWater() const
	{
		return new FantaWater();
	}
	AbstractLabel* CreateLable() const
	{
		return new FantaLabel();
	}
	AbstractCover* CreateCover() const
	{
		return new FantaCover();
	}
};

#endif
