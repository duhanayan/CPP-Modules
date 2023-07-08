#include "Animal.h"
#include "Cat.h"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &var)
{
	*this = var;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &var)
{
	type = var.type;
	std::cout << "Cat operator overload called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow" << std::endl;
}
