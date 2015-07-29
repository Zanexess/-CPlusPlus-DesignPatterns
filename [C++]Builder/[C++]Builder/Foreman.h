#ifndef FOREMAN_H
#define FOREMAN_H

#include "Builder.h"

class Foreman
{
	Builder *builder;
public:
	Foreman(Builder *builder)
	{
		this->builder = builder;
	}
	House* Construct()
	{
		return builder->getResult();
	}
};

#endif