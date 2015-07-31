#ifndef ADAPTER_H
#define ADAPTER_H

#include "ITarget.h"
#include "Adaptee.h"

class Adapter : public ITarget
{
private: 
	Adaptee *adaptee;
public:
	Adapter() { adaptee = new Adaptee(); }
	void Request()
	{
		adaptee->SpecificRequest();
	}
};



#endif