#include "Adapter.h"
#include "SomeClassThatDoWorkWell.h"
#include "ITarget.h"

#include <vector>

int main()
{
	std::vector<ITarget*> SomeClasses;

	ITarget *target1 = new Adapter();
	ITarget *target2 = new SomeClassThatDoWorkWell();

	SomeClasses.push_back(target1);
	SomeClasses.push_back(target2);

	ITarget *target;
	for (std::vector<ITarget*>::iterator it = SomeClasses.begin(); it != SomeClasses.end(); it++)
	{
		target = *it;
		target->Request();
		delete target;
	}	

	return 0;
}

