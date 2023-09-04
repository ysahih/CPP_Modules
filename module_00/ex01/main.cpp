#include "include/PhoneBook.hpp"

void	add(PhoneBook *phonebook)
{
	Contact	contact;

	contact.get_info();
	(*phonebook).add_contact(contact);
}

int	main()
{
	PhoneBook phonebook;
	std::string cmd;

	while (true) {
		std::cout << "enter comand : ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD") add(&phonebook);
		else if (cmd.empty()) continue ;
		else if (cmd == "SEARCH") phonebook.search_contacts();
		else if (cmd == "EXIT" || std::cin.eof()) exit(0);
		else std::cout << "--wrong Command--" << std::endl;
	}
}