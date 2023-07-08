#include "Zombie.h"

int main(void)
{
	Zombie *zombies;
	zombies = zombieHorde(5, "duhan");
	for(int a = -1; ++a < 5;)
		zombies[a].announce();
	delete[] zombies;
}