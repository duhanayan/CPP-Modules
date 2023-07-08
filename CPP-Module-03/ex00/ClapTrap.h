#pragma once

#include <iostream>

class ClapTrap
{
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &var);
		ClapTrap &operator = (const ClapTrap &var);
		~ClapTrap();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
