#include "Brain.h"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "Empty";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(std::string *var) {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = var[i];
}

Brain::Brain(const Brain &var)
{
	std::string *newIdeas = var.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = newIdeas[i] + " (copied)";
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator = (const Brain &var)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = var.ideas[i];
	std::cout << "Brain copy assigment operator overload called" << std::endl;
	return *this;
}

std::string *Brain::getIdeas() const
{
	return this->ideas;
}