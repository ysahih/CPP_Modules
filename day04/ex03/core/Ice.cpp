#include "../include/Ice.hpp"


Ice::Ice() {
	this->_type = "ice";
}

Ice::~Ice () {
	
}

// Ice::Ice(const Ice& copy) {
// 	*this = copy;
// }

// Ice &Ice::operator=(const Ice& copy) {

// 	//copying
// }

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

}