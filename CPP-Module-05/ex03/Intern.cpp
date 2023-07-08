#include "Intern.h"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &var) {
	*this = var;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &var) {
	(void)var;
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

const char	*Intern::FormDoesntExistException::what() const throw()
{
	return "[Intern Exception] Form Doesn't Exist";
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *creation = NULL;
    std::string array[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm *function[3] = {new PresidentialPardonForm(target) , new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (array[i] == name)
		{
			creation = function[i];
			break ;
		}
	}
	for (int i = 2; i >= 0; i--)
    {
        if (creation != function[i])
            delete function[i];
    }
	if (creation == NULL)
		throw FormDoesntExistException();
	return (creation);
}