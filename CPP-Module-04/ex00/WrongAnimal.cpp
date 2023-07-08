#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called for " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &var)
{
	*this = var;
	std::cout << "WrongAnimal copy constructor called for " << type << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &var)
{
	type = var.type;
	std::cout << "WrongAnimal operator overload called for " << type << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called for " << type << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
