#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &var);
		Animal &operator = (const Animal &var);
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		std::string getType() const;
};
