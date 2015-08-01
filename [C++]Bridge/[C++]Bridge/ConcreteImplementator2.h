#ifndef CONCRETEIMPLEMENTATOR2_H
#define CONCRETEIMPLEMENTATOR2_H

#include "Implementator.h"
#include <iostream>

using namespace std;

class ConcreteImplementator2 : public Implementator
{
public:
	void OperationImplementator()
	{
		cout << "ConcreteImplementator2" << endl;
	}
};



#endif