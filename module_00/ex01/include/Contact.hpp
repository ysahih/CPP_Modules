#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "PhoneBook.hpp"

#define LINE "- - - - - - - - - - - - - - - - - - - - - - -"
#define PIPE "|"
#define  TABLE "|     index|first name| last name|  nickname|"
class Contact 
{
private :
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string darkestsecret;
	std::string	phonenumber;

public :
	void get_info();

	std::string get_firstname(){
		return(firstname);
	}
	std::string get_lastname(){
		return(firstname);
	}
	std::string get_nickname(){
		return(nickname);
	}
	std::string get_darkestsecret(){
		return(darkestsecret);
	}
	std::string get_phonenumber(){
		return(phonenumber);
	}
	
};

std::string prompt(std::string s){
	std::string line;

	std::cout << s;
	std::cin >> line;
	return (line);
	// if (line[0] == 0)
}


void	Contact::get_info(){
	this->firstname = prompt("[ First Name ] : ");
	this->lastname = prompt("[ Last Name ] : ");
	this->nickname = prompt("[ Nick Name ] : ");
	this->phonenumber = prompt("[ Phone Number ] : ");
	this->darkestsecret = prompt("[ Darkest Secret ] : ");
}
       
#endif