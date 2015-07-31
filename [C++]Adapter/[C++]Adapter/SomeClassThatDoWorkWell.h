#ifndef SOMECLASSTHATDOWORKWELL_H
#define SOMECLASSTHATDOWORKWELL_H

#include "ITarget.h"
#include <iostream>

class SomeClassThatDoWorkWell: public ITarget 
{
public:
	 void Request()
	 {
		std::cout << "Request" << std::endl;	
	 }
};



#endif