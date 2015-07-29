#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "Builder.h"
#include "Basement.h"
#include "Storey.h"
#include "House.h"
#include "Roof.h"

class ConcreteBuilder : public Builder
{
public: 
	ConcreteBuilder(){ house = new House("MyHouse"); }
	
private: 
	House *house;
	Basement *basement;
	Roof *roof;
	Storey *storey;

private: 
	Basement* BuildBasement()
	{
		basement = new Basement();
		return basement;
	}
	Roof* BuildRoof()
	{
		roof = new Roof();
		return roof;
	}
	Storey* BuildStorey()
	{
		storey = new Storey();
		return storey;
	}


public:
	House* getResult()
	{
		basement = BuildBasement();
		storey = BuildStorey();
		roof = BuildRoof();

		house->Add(basement);
		house->Add(storey);
		house->Add(roof);

		house->info();

		return house;
	}
};



#endif