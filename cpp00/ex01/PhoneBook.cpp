#include <iomanip>
#include "PhoneBook.hpp"

int PhoneBook:: indexToPast = 0;

bool PhoneBook::contains(Contact &contact)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (contacts[i].equals(contact))
			return true;
		i++;
	}
	return false;
}

bool PhoneBook::add(Contact contact)
{
	if (contains(contact))
		return false;
	contacts[indexToPast] = contact;
	if (indexToPast != 8)
		indexToPast++;
	else
		indexToPast = 0;
	return true;
}

void printStrWithPipe(const std::string& str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << str << "|";
}

bool PhoneBook::displayContacts()
{
	int i;

	if (contacts[0].isEmpty())
		return false;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	i = 0;
	while (i < 9 && !contacts[i].isEmpty())
	{
		std::cout << std::setw(10) << i << "|";
		printStrWithPipe(contacts[i].getFirstName());
		printStrWithPipe(contacts[i].getLastName());
		printStrWithPipe(contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	return true;
}

bool PhoneBook::displayContact(int index)
{
	if (index > 8 || index < 0 || contacts[index].isEmpty())
		return false;
	std::cout << "first name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "phone number: " << contacts[index].getPhoneNumber() <<
	std::endl;
	std::cout << "darkest secret: " << contacts[index].getDarkestSecret() <<
	std::endl;
	return true;
}
