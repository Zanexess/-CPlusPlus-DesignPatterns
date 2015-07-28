#ifndef SPRITEWATER_H
#define SPRITEWATER_H

#include "AbstractWater.h"
#include <iostream>
#include <string>

 

class SpriteWater : public AbstractWater
{
public:
	SpriteWater() { name = "SpriteWater"; } 
};

#endif
