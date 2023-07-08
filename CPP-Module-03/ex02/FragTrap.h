#pragma once

#include "ClapTrap.h"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &var);
		FragTrap &operator = (const FragTrap &var);
		~FragTrap();
		void attack(const std::string &target);
		void highFivesGuys();
};