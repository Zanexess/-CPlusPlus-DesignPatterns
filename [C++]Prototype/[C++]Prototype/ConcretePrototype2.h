#ifndef CONCRETEPROTOTYPE2_H
#define CONCRETEPROTOTYPE2_H

#include "Prototype.h"

class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2(int id)
	{
		type = "Type2";
		this->id = id;
	}
	
	Prototype* Clone()
	{
		return new ConcretePrototype2(*this);
	}
};

#endif