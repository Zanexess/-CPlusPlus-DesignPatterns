#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>

class Adaptee
{
public: 
	Adaptee() { }
	void SpecificRequest()
	{
		std::cout << "SpecificRequest" << std::endl;
	}
};



#endif 