#include "Builder.h"
#include "ConcreteBuilder.h"
#include "Foreman.h"
#include "House.h"



int main()
{
	House *house;
	Builder *builder = new ConcreteBuilder();
	Foreman *foreman = new Foreman(builder);
	

	house = foreman->Construct();

}