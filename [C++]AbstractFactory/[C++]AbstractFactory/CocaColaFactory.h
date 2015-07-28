#ifndef COCACOLAFACTORY_CPP
#define COCACOLAFACTORY_CPP

#include "AbstractFactory.h"
#include "CocaColaBottle.h"
#include "CocaColaWater.h"
#include "CocaColaLabel.h"
#include "CocaColaCover.h"

class CocaColaFactory : public AbstractFactory
{
public:
	AbstractBottle* CreateBottle() const
	{
		return new CocaColaBottle();
	}
	AbstractWater* CreateWater() const
	{
		return new CocaColaWater();
	}
	AbstractLabel* CreateLable() const
	{
		return new CocaColaLabel();
	}
	AbstractCover* CreateCover() const
	{
		return new CocaColaCover();
	}
};

#endif
