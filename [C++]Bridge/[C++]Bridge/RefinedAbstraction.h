#ifndef REFINEDABSTRACTION_H
#define REFINEDABSTRACTION_H

#include "Abstraction.h"
#include "Implementator.h"
#include <iostream>
using namespace std;

class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction(Implementator *implementator) : Abstraction(implementator) {}
	void Operation()
	{
		cout << "RefinedAbstraction" << endl;
		implementator->OperationImplementator();
	}
};



#endif