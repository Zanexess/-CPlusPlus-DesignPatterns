#ifndef STOREY_H
#define STOREY_H

#include "Parts.h"

class Storey: public Parts
{
public:
	Storey() { setName("Storey"); } 

protected:
	std::string name;

	void setName(std::string name)
	{
		this->name = name;
	}
	std::string getName()
	{
		return name;
	}
};

#endif