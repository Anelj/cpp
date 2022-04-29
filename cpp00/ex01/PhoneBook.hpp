
#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

# include "Contact.hpp"
# include <string>

class PhoneBook {
	Contact contacts[9];
	static int 	indexToPast;

	bool contains(Contact &contact);
public:
	bool add(Contact contact);
	bool displayContacts();
	bool displayContact(int index);
};

#endif
