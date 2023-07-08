#pragma once

#include "Weapon.h"

class HumanB
{
	Weapon *weapon_B;
	string name_B;
	public:
		HumanB(string name);
		void setWeapon(Weapon &weapon);
		void attack();
};
