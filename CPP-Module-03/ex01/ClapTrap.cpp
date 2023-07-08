#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	this->name = "Nameless";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap Constructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap Constructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &var)
{
	*this = var;
	std::cout << "ClapTrap Copy constructor called for " << this->name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &var) {
	name = var.name;
	hitPoints = var.hitPoints;
	energyPoints = var.energyPoints;
	attackDamage = var.attackDamage;
	std::cout << "ClapTrap Operator Overlaod Called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can not attack. " << name << " is dead." << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can not attack. " << name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << "is already dead!" << std::endl;;
		return;
	}
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " died!" << std::endl;;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can not be repaired! " << name << " is dead." << std::endl;;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can not be repaired! " << name << " is out of energy." << std::endl;;
		return ;
	}
	hitPoints += amount;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " repaired " << amount << "HP" << std::endl;
}
