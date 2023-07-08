#pragma once

#include "Animal.h"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &var);
		Dog &operator = (const Dog &var);
		~Dog();
		void makeSound() const;
};