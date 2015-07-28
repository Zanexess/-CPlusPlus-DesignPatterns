#ifndef SPRITEFACTORY_H
#define SPRITEFACTORY_H

#include "AbstractFactory.h"
#include "SpriteBottle.h"
#include "SpriteWater.h"
#include "SpriteLabel.h"
#include "SpriteCover.h"

class SpriteFactory : public AbstractFactory
{
public:
	AbstractBottle* CreateBottle() const
	{
		return new SpriteBottle();
	}
	AbstractWater* CreateWater() const
	{
		return new SpriteWater();
	}
	AbstractLabel* CreateLable() const
	{
		return new SpriteLabel();
	}
	AbstractCover* CreateCover() const
	{
		return new SpriteCover();
	}
};

#endif
