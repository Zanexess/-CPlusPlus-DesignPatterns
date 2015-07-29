#ifndef ROOF_H
#define ROOF_H

#include "Parts.h"

class Roof : public Parts
{
public:
	Roof() { setName("Roof"); } 

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