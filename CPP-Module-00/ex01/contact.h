#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
	public:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

class PhoneBook
{
	Contact contact[8];
	public:
		int counter;
		void setData();
		void showList();
		void getDetails();	
};

#endif