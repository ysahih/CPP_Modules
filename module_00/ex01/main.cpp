#include "include/PhoneBook.hpp"
#include "include/Contact.hpp"

void	add(PhoneBook phonebook)
{
	Contact	contact;

	contact.get_info();
	phonebook.add_contact(contact);
}

int	main()
{
	PhoneBook phonebook;
	std::string cmd;

	while (true){
		std::cin >> cmd;
		if (cmd == "ADD") add(phonebook);
		else if (cmd == "SEARCH"){
			Contact contact;
			contact = phonebook.get_contact(0);
			std::cout << contact.get_firstname() << "-";
		}
			// phonebook.search_contacts();
		else if (cmd == "EXIT")	exit(0);
		// std::cout <<
	}
}