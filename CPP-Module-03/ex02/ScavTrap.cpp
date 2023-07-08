#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	name = "Nameless";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap name constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &var)
{
	*this = var;
	std::cout << "ScavTrap copy constructor called for " << name << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &var)
{
	name = var.name;
	hitPoints = var.hitPoints;
	energyPoints = var.energyPoints;
	attackDamage = var.attackDamage;
	std::cout << "ScavTrap operator overload called for " << name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is dead." << std::endl;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}
