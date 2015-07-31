#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <string>

class Prototype
{
protected:	
	int id;
	std::string type;

	void setId(int id)
	{
		this->id = id;
	}
	void setType(std::string type)
	{
		this->type = type;
	}


public: 	
	Prototype()
	{

	}
	Prototype(int id)
	{
		setId(id);
	}
	Prototype(int id, std::string type)
	{
		setId(id);
		setType(type);
	}

	int getId()
	{
		return id;
	}

	std::string getType()
	{
		return type;
	}
	virtual	Prototype* Clone() = 0;

};



#endif // !PROTOTYPE_H
