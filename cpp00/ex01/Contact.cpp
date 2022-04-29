#include "Contact.hpp"




/*Contact::Contact(std::string &firstName, std::string &lastName,
				 std::string &nickname, std::string &phoneNumber,
				 std::string &darkestSecret) : firstName(firstName),
											   lastName(lastName),
											   nickname(nickname),
											   phoneNumber(phoneNumber),
											   darkestSecret(darkestSecret)
{}*/


Contact::Contact( void )
{
	//Contact::Contact("", "", "", "", "");
	this->lastName = "";
	this->firstName = "";
	this->phoneNumber = "";
	this->nickname = "";
	this->darkestSecret = "";
	this->is_empty = true;
}

Contact::Contact(const std::string &firstName, const std::string &lastName,
				 const std::string &nickname, const std::string &phoneNumber,
				 const std::string &darkestSecret) : firstName(firstName),
													 lastName(lastName),
													 nickname(nickname),
													 phoneNumber(phoneNumber),
													 darkestSecret(
															 darkestSecret)
{
	this->is_empty = false;
}

bool Contact::equals(Contact &contact)
{
	if (contact.isEmpty() || this->is_empty)
		return false;
	if (!contact.getFirstName().compare(this->firstName)
		&& !contact.getLastName().compare(this->lastName))
		return true;
	return false;
}

const std::string &Contact::getFirstName() const
{
	return firstName;
}

const std::string &Contact::getLastName() const
{
	return lastName;
}

const std::string &Contact::getNickname() const
{
	return nickname;
}

const std::string &Contact::getPhoneNumber() const
{
	return phoneNumber;
}

const std::string &Contact::getDarkestSecret() const
{
	return darkestSecret;
}

bool Contact::isEmpty() const
{
	return is_empty;
}



