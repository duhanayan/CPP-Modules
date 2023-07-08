#include "contact.h"
void	addSpace(int size)
{
	int a = 0;
	while (++a < size)
		std::cout << " ";
}

int check_if_empty(std::string input)
{
	int i;

	i = -1;
	while (input[++i])
		if (input[i] >= 33 && input[i] <= 126)
			return 0;
	return 1;
}

void PhoneBook::setData()
{
	std::cout << "Name: ";				getline(std::cin, contact[counter].name);
	if (contact[counter].name.length() == 0 || check_if_empty(contact[counter].name)) {std::cout << "Invalid input." << std::endl; contact[counter].name.clear(); return;}
	std::cout << "Surname: ";			getline(std::cin, contact[counter].surname);
	if (contact[counter].surname.length() == 0 || check_if_empty(contact[counter].surname)) {std::cout << "Invalid input." << std::endl; contact[counter].surname.clear(); return;}
	std::cout << "Nickname: ";			getline(std::cin, contact[counter].nickname);
	if (contact[counter].nickname.length() == 0 || check_if_empty(contact[counter].nickname)) {std::cout << "Invalid input." << std::endl; contact[counter].nickname.clear(); return;}
	std::cout << "Phone Number: ";		getline(std::cin, contact[counter].phoneNumber);
	if (contact[counter].phoneNumber.length() == 0 || check_if_empty(contact[counter].phoneNumber)) {std::cout << "Invalid input." << std::endl; contact[counter].phoneNumber.clear(); return;}
	std::cout << "Darkest Secret: ";	getline(std::cin, contact[counter].darkestSecret);
	if (contact[counter].darkestSecret.length() == 0 || check_if_empty(contact[counter].darkestSecret)) {std::cout << "Invalid input." << std::endl; contact[counter].darkestSecret.clear(); return;}
	if (counter++ == 7)
		counter = 0;
}

void PhoneBook::showList()
{
	int	index = 0;
	if (contact[index].name.length() == 0)
	{
		std::cout << "Phone Book is empty." << std::endl;
		return ;
	}
	std::cout << "\n     Index|      Name|   Surname|  Nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (index < 8 && contact[index].name.length() > 0)
	{
		std::cout << "         " << index + 1 << "|";
		if (strlen(contact[index].name.c_str()) > 10)
			std::cout << contact[index].name.substr(0, 9) << "." << "|";
		else
		{
			addSpace(11 - strlen(contact[index].name.c_str()));
			std::cout << contact[index].name << "|";
		}
		if (strlen(contact[index].surname.c_str()) > 10)
			std::cout << contact[index].surname.substr(0, 9) << "." << "|";
		else
		{
			addSpace(11 - strlen(contact[index].surname.c_str()));
			std::cout << contact[index].surname << "|";
		}
		if (strlen(contact[index].nickname.c_str()) > 10)
			std::cout << contact[index].nickname.substr(0, 9) << "." << "|" << std::endl;
		else
		{
			addSpace(11 - strlen(contact[index].nickname.c_str()));
			std::cout << contact[index].nickname << "|" << std::endl;
		}
		index++;
	}
	std::cout << "--------------------------------------------" << std::endl;
	getDetails();
}

void PhoneBook::getDetails()
{
	std::string input;
	std::cout << "# ";
	getline(std::cin, input);
	int idx = -1;
	while (input[++idx])
	{
		if (!isnumber(input[idx]))
		{
			std::cout << "Invalid input." << std::endl;
			return ;
		}
	}
	idx = atoi(input.c_str()) - 1;
	if (idx < 0 || idx > 7)
	{
		std::cout << "Invalid input." << std::endl;
		return ;
	}
	if (contact[idx].name.length() > 0)
	{
		std::cout << "Name: " << contact[idx].name << std::endl;
		std::cout << "Surname: " << contact[idx].surname << std::endl;
		std::cout << "Nickname: " << contact[idx].nickname << std::endl;
		std::cout << "Phone Number: " << contact[idx].phoneNumber << std::endl;
		std::cout << "Darkest Secret: " << contact[idx].darkestSecret << std::endl;
	}
	else
		std::cout << "Invalid input." << std::endl;
}
