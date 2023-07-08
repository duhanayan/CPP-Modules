#include "Zombie.h"

int main(void)
{
	Zombie *c;

	c = newZombie("faruk");
	c->announce();
	delete(c);

	randomChump("duhan");

	return 0;
}
