#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &var);
		WrongAnimal &operator = (const WrongAnimal &var);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		std::string getType() const;
};
