#pragma once

#include <iostream>
#include "ClapTrap.h"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &var);
		ScavTrap &operator = (const ScavTrap &var);
		~ScavTrap();
		void attack(const std::string &target);
		void guardGate();
};
