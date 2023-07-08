#include "Animal.h"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor called for " << type << std::endl;
}

Animal::Animal(const Animal &var)
{
	*this = var;
	std::cout << "Animal copy constructor called for " << type << std::endl;
}

Animal &Animal::operator = (const Animal &var)
{
	type = var.type;
	std::cout << "Animal operator overload called for " << type << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called for " << type << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Default Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
