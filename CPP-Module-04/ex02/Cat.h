#pragma once

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
	Brain *brain;
	public:
		Cat();
		Cat(const Cat &var);
		Cat &operator = (const Cat &var);
		~Cat();
		void makeSound() const;
		void compareTo (const Cat& var) const;
};
