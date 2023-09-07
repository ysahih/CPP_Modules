#include "Harl.hpp"

void Harl::_debug(void) {
    std::cout << " ---------DEBUG--------- " << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) {
    std::cout << " ---------INFO--------- " << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void) {
    std::cout << " ---------WARNING--------- " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) {
    std::cout << " ---------ERROR--------- " << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int find(std::string level) {

	int i = 0;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (levels[i] != level) {
		i++;
		if (i > 3)
			return -1;
	}
	return i ;
}

void Harl::complain(std::string level) {

	int index;
	typedef void(Harl::*FunctionPtr)();
	FunctionPtr pointer[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	index = find(level);
    switch(index) {
        case 0:
            (this->* pointer[0])();
        case 1:
            (this->* pointer[1])();
        case 2:
            (this->* pointer[2])();
        case 3:
            (this->* pointer[3])();
            break;
        default :
		    std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
    }
}