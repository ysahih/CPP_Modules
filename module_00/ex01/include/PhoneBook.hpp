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
	void add_contact(Contact contact);
	Contact get_contact(int index);
	void search_contacts(void);

};

void	PhoneBook::add_contact(Contact contact){
	this->contact[Contact_number % 8] = contact;
	Contact_number++;
}

Contact PhoneBook::get_contact(int index){
	return this->contact[index];
}

void	PhoneBook::search_contacts(void){
	
	std::cout << LINE << std::endl;
	std::cout << TABLE << std::endl;
	std::cout << LINE << std::endl;
	for (int i=0; i<=this->Contact_number; i++){
		std::cout << PIPE << this->contact[i].get_firstname();
		std::cout << PIPE << this->contact[i].get_lastname();
		std::cout << PIPE << this->contact[i].get_nickname() << std::endl;
	}
	
}

#endif