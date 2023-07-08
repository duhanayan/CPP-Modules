#pragma once

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal
{
	Brain *brain;
	public:
		Dog();
		Dog(const Dog &var);
		Dog &operator = (const Dog &var);
		~Dog();
		void makeSound() const;
		void compareTo(const Dog &var) const;
};