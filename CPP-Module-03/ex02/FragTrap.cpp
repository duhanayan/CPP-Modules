#include "FragTrap.h"

FragTrap::FragTrap()
{
	name = "Nameless";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &var)
{
	*this = var;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &var)
{
	name = var.name;
	hitPoints = var.hitPoints;
	energyPoints = var.energyPoints;
	attackDamage = var.attackDamage;
	std::cout << "FragTrap assigment operator overload called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << "FragTrap " << name << " is dead." << std::endl;
	}
	if (energyPoints <= 0)
	{
		std::cout << "FragTrap " << name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << ": Give me high fives!" << std::endl;
}