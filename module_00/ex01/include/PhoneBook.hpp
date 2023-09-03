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

bool	PhoneBook::empty(){
	return (this->Contact_number == 0);
}

void	PhoneBook::add_contact(Contact contact){
	this->contact[Contact_number % 8] = contact;
	Contact_number++;
}

Contact PhoneBook::get_contact(int index){
	return this->contact[index];
}

std::string	customize(std::string info)
{
	if (info.length() == 10)
		return (info);
	if (info.length() > 10 ){
		std::string str = std::string(info.substr(0, 9));
		return str + '.';
	}
	std::string	str(10 - info.length(), ' ');
	return info + str;
}

void	with_index(Contact contact, int index){
	
	std::cout << "information of contact number " << index << " is :" << std::endl;
	std::cout << "firstname :" << contact.get_firstname() << std::endl;
	std::cout << "lastname :" << contact.get_lastname() << std::endl;
	std::cout << "nickname :" << contact.get_nickname() << std::endl;
	std::cout << "darkestsecret :" << contact.get_darkestsecret() << std::endl;
	std::cout << "phonenumber :" << contact.get_phonenumber() << std::endl;
}

void	PhoneBook::search_contacts(void){
	int	index;

	if (empty()){
		std::cout << "Your PhonBook is empty" << std::endl;
		return ;
	}
	std::cout << LINE << std::endl;
	std::cout << TABLE << std::endl;
	std::cout << LINE << std::endl;
	for (int i=0; i<this->Contact_number; i++){
		std::cout << PIPE << "         " << i + 1;
		std::cout << PIPE << customize(this->contact[i].get_firstname());
		std::cout << PIPE << customize(this->contact[i].get_lastname());
		std::cout << PIPE << customize(this->contact[i].get_nickname()) << PIPE << std::endl;
		std::cout << LINE << std::endl;
	}
	std::cout << "inter an index : ";
	std::cin >> index;
	if (index > this->Contact_number){
		std::cout << "error: index is out of range" << std::endl;
		return ;
	}
	with_index(this->contact[index - 1], index);
}

#endif