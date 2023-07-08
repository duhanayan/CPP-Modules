#pragma once

#include "Weapon.h"

class HumanA
{
	Weapon *weapon_A;
	string name_A;
	public:
		HumanA(string name, Weapon &weapon);
		void attack();
};