#ifndef FACADE_H
#define FACADE_H

#include "SubSystem1.h"
#include "SubSystem2.h"
#include "SubSystem3.h"
#include "SubSystem4.h"


class Facade
{
	SubSystem1 *subSystem1;
	SubSystem2 *subSystem2;
	SubSystem3 *subSystem3;
	SubSystem4 *subSystem4;

public:
	Facade() 
	{
		subSystem1 = new SubSystem1();
		subSystem2 = new SubSystem2();
		subSystem3 = new SubSystem3();
		subSystem4 = new SubSystem4();
	}

	void MethodABCD()
	{
		subSystem1->Method();
		subSystem2->Method();
		subSystem3->Method();
		subSystem4->Method();
	}

	void MethodAB()
	{
		subSystem1->Method();
		subSystem2->Method();
	}

	void MethodD()
	{
		subSystem4->Method();
	}
};



#endif