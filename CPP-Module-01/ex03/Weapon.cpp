#include "Weapon.h"

Weapon::Weapon(string type)
{
	this->type = type;
}

const string &Weapon::getType()
{
	return this->type;
}

void Weapon::setType(string type)
{
	this->type = type;
}