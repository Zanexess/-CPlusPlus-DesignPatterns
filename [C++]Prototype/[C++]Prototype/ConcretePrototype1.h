#ifndef CONCRETEPROTOTYPE1_H
#define CONCRETEPROTOTYPE1_H

#include "Prototype.h"

class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1(int id)
	{
		type = "Type1";
		this->id = id;
	}
	
	Prototype* Clone()
	{
		return new ConcretePrototype1(*this);
	}


};

#endif