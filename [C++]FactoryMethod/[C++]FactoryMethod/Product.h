#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
public:
	std::string name;
	
	virtual std::string getName() = 0;
	virtual ~Product() {} ;
};


#endif