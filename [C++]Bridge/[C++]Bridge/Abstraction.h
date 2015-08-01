#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "Implementator.h"

class Abstraction
{
protected:
	Implementator *implementator;
public:
	Abstraction(Implementator *implementator)
	{
		this->implementator = implementator;
	}
	virtual void Operation()
	{
		implementator->OperationImplementator();
	}
};



#endif