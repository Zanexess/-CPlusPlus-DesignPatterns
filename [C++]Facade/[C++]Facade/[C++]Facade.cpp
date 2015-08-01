#include "Facade.h"

int main()
{
	Facade *facade = new Facade();

	facade->MethodABCD();
	facade->MethodD();
	facade->MethodAB();

	delete facade;

	return 0;
}

