#include "WrongAnimal.h"
#include "WrongCat.h"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &var)
{
	*this = var;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &var)
{
	type = var.type;
	std::cout << "WrongCat operator overload called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
