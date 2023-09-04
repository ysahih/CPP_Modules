#include "../include/PhoneBook.hpp"

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
	return str + info;
}

void	with_index(Contact contact, int index){
	std::cout << "information of contact number " << index << " is :" << std::endl;
	std::cout << "firstname     :" << contact.get_firstname() << std::endl;
	std::cout << "lastname      :" << contact.get_lastname() << std::endl;
	std::cout << "nickname      :" << contact.get_nickname() << std::endl;
	std::cout << "phonenumber   :" << contact.get_phonenumber() << std::endl;
	std::cout << "darkestsecret :" << contact.get_darkestsecret() << std::endl;
}

void	PhoneBook::search_contacts(void){
	std::string	in;
	int	index;
	int	n;

	n = (this->Contact_number < 8) ? this->Contact_number : 8;
	if (empty()){
		std::cout << "Your PhonBook is empty" << std::endl;
		return ;
	}
	std::cout << LINE << std::endl;
	std::cout << TABLE << std::endl;
	std::cout << LINE << std::endl;
	for (int i=0; i<n; i++) {
		std::cout << PIPE << "         " << i + 1;
		std::cout << PIPE << customize(this->contact[i].get_firstname());
		std::cout << PIPE << customize(this->contact[i].get_lastname());
		std::cout << PIPE << customize(this->contact[i].get_nickname()) << PIPE << std::endl;
		std::cout << LINE << std::endl;
	}
	std::cout << "inter an index : ";
    if (!(std::cin >> index)) {
		if(std::cin.eof()) exit(0);
        std::cout << "error : invalid input!" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
        return ;
    }
	if (index < 1 || index > 8 || index > this->Contact_number){
		std::cout << "error: index is out of range!" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		return ;
	}
	with_index(this->contact[index - 1], index);
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}
