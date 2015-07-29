#ifndef BUILDER_H
#define BUILDER_H

#include "Basement.h"
#include "Roof.h"
#include "Storey.h"
#include "House.h"

class Builder
{
private:
	virtual Basement* BuildBasement() = 0;
	virtual Roof* BuildRoof() = 0;
	virtual Storey* BuildStorey() = 0;
public:
	virtual House* getResult() = 0;
};



#endif