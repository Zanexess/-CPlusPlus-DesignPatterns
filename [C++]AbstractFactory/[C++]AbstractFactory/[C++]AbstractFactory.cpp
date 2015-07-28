// [C++]AbstractFactory.cpp: определяет точку входа для консольного приложения.
//

#include "Client.h"
#include "CocaColaFactory.h"
#include "SpriteFactory.h"
#include "FantaFactory.h"

int main()
{
	Client* client = 0;

	client = new Client(new CocaColaFactory());
	client->Run();

	client = new Client(new SpriteFactory());
	client->Run();

	client = new Client(new FantaFactory());
	client->Run();

	delete client;

	return 0;
}

