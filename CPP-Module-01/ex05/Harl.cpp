#include "Harl.h"

void Harl::debug(void)
{
	std::cout << "[DEBUG LEVEL] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "[INFO LEVEL] : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "[WARNING LEVEL] : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ERROR LEVEL] : This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	std::string situation[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int x = -1;
	while (++x <= 3)
		if (level == situation[x])
			(this->*functions[x])();
}
