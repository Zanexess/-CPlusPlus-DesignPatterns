#ifndef CLIENT_H
#define CLIENT_H

#include "AbstractWater.h"
#include "AbstractBottle.h"
#include "AbstractFactory.h"


class Client
{
private:
	AbstractBottle *bottle;
	AbstractWater *water;
	AbstractLabel *label;
	AbstractCover *cover;

public:
	Client(AbstractFactory *factory)
        {
            bottle = factory->CreateBottle();
			water = factory->CreateWater();
			label = factory->CreateLable();
			cover = factory->CreateCover();
        }
	void Run()
        {
            bottle->Interact(water);
			label->Interact(bottle);
			cover->Interact(bottle);
        }
	~Client()
	{
		delete label;
		delete cover;
		delete water;
		delete bottle;

	}
};

#endif