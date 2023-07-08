#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Weapon
{
	string type;
	public:
		Weapon(string type);
		const string &getType();
		void setType(string type);
};
