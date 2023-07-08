#include "Zombie.h"

Zombie::Zombie(){}

Zombie::~Zombie() {std::cout << this->name << " has died!" << std::endl;}

void Zombie::setName(std::string name)
{
	this->name = name;
}
