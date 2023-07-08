#include "contact.h"

int main(void)
{
	PhoneBook phoneBook;
	phoneBook.counter = 0;

	std::string	command;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD" || command == "add")
			phoneBook.setData();
		else if (command == "SEARCH" || command == "search")
			phoneBook.showList();
		else if (command == "EXIT" || command == "exit")
			break;
	}
	return 0;
}