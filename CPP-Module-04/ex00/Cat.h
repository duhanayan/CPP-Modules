#pragma once
#include "Animal.h"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &var);
		Cat &operator = (const Cat &var);
		~Cat();
		void makeSound() const;
};