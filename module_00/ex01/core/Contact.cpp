#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

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

	std::cout << s;
	std::cin >> line;
	return (line);
}

void	Contact::get_info(){
	this->firstname = prompt("[ First Name ] : ");
	this->lastname = prompt("[ Last Name ] : ");
	this->nickname = prompt("[ Nick Name ] : ");
	this->phonenumber = prompt("[ Phone Number ] : ");
	this->darkestsecret = prompt("[ Darkest Secret ] : ");
}