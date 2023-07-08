#include "Animal.h"
#include "Dog.h"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &var)
{
	type = var.getType();
	brain = new Brain(*(var.brain));
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &var)
{
	type = var.type;
	if (brain)
		delete brain;
	brain = new Brain(*(var.brain));
	std::cout << "Dog operator overload called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof" << std::endl;
}

void Dog::compareTo(const Dog &var) const {
	std::cout << std::endl;
	std::cout << "Now comparing two " << type << std::endl;
	std::cout << "My Brain's heap adress: " << brain << std::endl;
	std::cout << "Other's heap adress: " << var.brain << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t | \t\t Other brain's ideas" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdeas()[i] << "\t\t | \t\t" << var.brain->getIdeas()[i] << std::endl;
	std::cout << std::endl;
}