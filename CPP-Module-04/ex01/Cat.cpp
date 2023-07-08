#include "Animal.h"
#include "Cat.h"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &var)
{
	type = var.getType();
	brain = new Brain(*(var.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &var)
{
	type = var.type;
	if (brain)
		delete brain;
	brain = new Brain(*(var.brain));
	std::cout << "Cat operator overload called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow" << std::endl;
}

void Cat::compareTo(const Cat &var) const {
	std::cout << std::endl;
	std::cout << "Now comparing two " << type << std::endl;
	std::cout << "My Brain's heap adress: " << brain << std::endl;
	std::cout << "Other's heap adress: " << var.brain << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t | \t\tOther brain's ideas" << std::endl;
	for (int i = 0; i < 59; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdeas()[i] << "\t\t\t | \t\t" << var.brain->getIdeas()[i] << std::endl;
	std::cout << std::endl;
}
