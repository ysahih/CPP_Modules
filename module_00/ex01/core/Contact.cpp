#include "../include/PhoneBook.hpp"

std::string Contact::get_firstname(){
	return(this->firstname);
}

std::string Contact::get_lastname(){
	return(this->lastname);
}

std::string Contact::get_nickname(){
	return(this->nickname);
}

std::string Contact::get_darkestsecret(){
	return(this->darkestsecret);
}

std::string Contact::get_phonenumber(){
	return(this->phonenumber);
}

std::string prompt(std::string s){
	
	std::string line;

	while (true){
		std::cout << s;
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(0);
		if (!line.empty())
			return (line);
	}
}

void	Contact::get_info() {
	this->firstname = prompt("[ First Name ] : ");
	this->lastname = prompt("[ Last Name ] : ");
	this->nickname = prompt("[ Nick Name ] : ");
	this->phonenumber = prompt("[ Phone Number ] : ");
	this->darkestsecret = prompt("[ Darkest Secret ] : ");
}