#ifndef CONCRETEIMPLEMENTATOR1_H
#define CONCRETEIMPLEMENTATOR1_H

#include "Implementator.h"
#include <iostream>

using namespace std;

class ConcreteImplementator1 : public Implementator
{
public:
	void OperationImplementator()
	{
		cout << "ConcreteImplementator1" << endl;
	}
};



#endif