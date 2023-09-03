#include "include/PhoneBook.hpp"
#include "include/Contact.hpp"

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

	while (true){
		std::cin >> cmd;
		if (cmd == "ADD") add(&phonebook);
		else if (cmd == "SEARCH")
			phonebook.search_contacts();
		else if (cmd == "EXIT"|| cmd.empty()) exit(0);
	}
}