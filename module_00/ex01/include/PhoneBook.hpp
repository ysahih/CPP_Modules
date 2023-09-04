#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private :
	Contact contact[8];
	int Contact_number;

public :
	PhoneBook(){
		Contact_number = 0;
	}
	bool empty();
	void add_contact(Contact contact);
	Contact get_contact(int index);
	void search_contacts(void);
};

#endif