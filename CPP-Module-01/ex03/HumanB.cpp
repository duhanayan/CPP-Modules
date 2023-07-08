#include "HumanB.h"

HumanB::HumanB(string name)
{
	this->name_B = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_B = &weapon;
}

void HumanB::attack()
{
	cout << this->name_B << " attacks with their " << weapon_B->getType() << endl;
}
