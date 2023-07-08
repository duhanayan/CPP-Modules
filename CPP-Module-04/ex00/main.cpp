#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"


int main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* n = new WrongCat();

	std::cout << "The Dog should be a "<< j->getType() << std::endl;
	std::cout << "The Cat should be a " << i->getType() << std::endl;
	std::cout << "This animal should be a " << meta->getType() << std::endl;
	std::cout << "This animal should be a " << n->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	n->makeSound();

	delete j;
	j = i;

	delete meta;
	delete i;
	delete n;
	//meta->makeSound();
}