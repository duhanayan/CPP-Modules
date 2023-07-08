#include "Harl.h"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int index = -1;
	while (++index <= 3)
		if (level == levels[index])
			break;
	switch (index)
	{
		case 0:
			(this->*functions[0]) ();
			std::cout << "\n";
			(this->*functions[1]) ();
			std::cout << "\n";
			(this->*functions[2]) ();
			std::cout << "\n";
			(this->*functions[3]) ();
			break;
		case 1:
			(this->*functions[1]) ();
			std::cout << "\n";
			(this->*functions[2]) ();
			std::cout << "\n";
			(this->*functions[3]) ();
			break;
		case 2:
			(this->*functions[2]) ();
			std::cout << "\n";
			(this->*functions[3]) ();
			break;
		case 3:
			(this->*functions[3]) ();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}