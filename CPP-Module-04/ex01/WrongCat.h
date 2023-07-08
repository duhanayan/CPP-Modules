#pragma once
#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &var);
		WrongCat operator = (const WrongCat &var);
		~WrongCat();
};