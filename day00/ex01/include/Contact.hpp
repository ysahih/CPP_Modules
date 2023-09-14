#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>

#define LINE "- - - - - - - - - - - - - - - - - - - - - - -"
#define PIPE "|"
#define  TABLE "|   index  |first name| last name| nickname |"

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
	std::string get_firstname();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_darkestsecret();
	std::string get_phonenumber();
};

#endif