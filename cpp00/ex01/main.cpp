#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"

void	addContact(PhoneBook &phoneBook)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "First name?" << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "Last name?" << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "Nickname?" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Phone number?" << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest secret?" << std::endl;
	std::getline(std::cin, darkestSecret);
	if (firstName.empty() || lastName.empty() || nickname.empty()
		|| phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "Fields can not be empty. The contact has not been added"
				  << std::endl;
		return ;
	}
	if (!phoneBook.add(Contact(firstName, lastName, nickname,
								   phoneNumber, darkestSecret)))
		std::cout
		<< "Phonebook has this contact. The contact has not been added."
				  << std::endl;
}

void search(PhoneBook &phoneBook)
{
	std::string index;

	if (!phoneBook.displayContacts())
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	std::cout << "Choose index of contact to display." << std::endl;
	std::getline(std::cin, index);
	if (index.length() != 1 || !std::isdigit(*(index.c_str()))
		|| !phoneBook.displayContact(atoi(index.c_str())))
		std::cout << "There is no contact with this index." << std::endl;
}

int main()
{
	PhoneBook	phoneBook;
	std::string	s;

	while (1)
	{
		std::cout << "Available options are: ADD, SEARCH or EXIT. Choose!" <<
				  std::endl;
		std::getline(std::cin, s);
		if (!s.compare("ADD"))
		{
			addContact(phoneBook);
		}
		else if (!s.compare("EXIT"))
			return 0;
		else if (!s.compare("SEARCH"))
			search(phoneBook);
	}
}
