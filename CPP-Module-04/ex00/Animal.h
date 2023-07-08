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
		virtual void makeSound(void) const;
		std::string getType() const;
};
