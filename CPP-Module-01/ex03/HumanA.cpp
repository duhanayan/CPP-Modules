#include "HumanA.h"

HumanA::HumanA(string name, Weapon &weapon)
{
	this->name_A = name;
	this->weapon_A = &weapon;
}

void HumanA::attack()
{
	cout << this->name_A << " attacks with their " << weapon_A->getType() << endl;
}