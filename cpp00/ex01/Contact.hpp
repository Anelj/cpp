#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>

class	Contact {
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	bool 		is_empty;

public:
	Contact( void );

	Contact(const std::string &firstName, const std::string &lastName,
			const std::string &nickname, const std::string &phoneNumber,
			const std::string &darkestSecret);

	bool equals(Contact &contact);

	const std::string &getFirstName() const;

	const std::string &getLastName() const;

	const std::string &getNickname() const;

	const std::string &getPhoneNumber() const;

	const std::string &getDarkestSecret() const;

	bool isEmpty() const;
};

#endif
