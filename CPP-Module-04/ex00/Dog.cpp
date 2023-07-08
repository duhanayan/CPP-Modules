#include "Animal.h"
#include "Dog.h"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &var)
{
	*this = var;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &var)
{
	type = var.type;
	std::cout << "Dog operator overload called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof" << std::endl;
}