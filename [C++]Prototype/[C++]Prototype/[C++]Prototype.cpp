#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
#include <iostream>

int main()
{
	ConcretePrototype1 *concretePrototype1 = new ConcretePrototype1(1);
	ConcretePrototype1 *concretePrototype2 = new ConcretePrototype1(2);
	ConcretePrototype2 *concretePrototype3 = new ConcretePrototype2(1);
	ConcretePrototype2 *concretePrototype4 = new ConcretePrototype2(2);

	std::cout << concretePrototype1->getId() << " " << concretePrototype1->getType() << std::endl;
	std::cout << concretePrototype2->getId() << " " << concretePrototype2->getType() << std::endl;
	std::cout << concretePrototype3->getId() << " " << concretePrototype3->getType() << std::endl;
	std::cout << concretePrototype4->getId() << " " << concretePrototype4->getType() << std::endl;
	
	delete concretePrototype1;
	delete concretePrototype2;
	delete concretePrototype3;
	delete concretePrototype4;

}

