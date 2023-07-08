#include "Zombie.h"

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies;
	
	zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombies[i].setName(name);
	return zombies;
}
