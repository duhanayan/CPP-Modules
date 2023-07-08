#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	std::string name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce();
};

Zombie	*zombieHorde(int N, std::string name);

#endif
