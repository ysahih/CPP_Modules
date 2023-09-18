#include "../include/MateriaSource.hpp"


Ice::Ice() {
	this->_type = "ice";
}

Ice::~Ice () {
}

Ice::Ice(const Ice& copy) {
	*this = copy;
}

Ice &Ice::operator=(const Ice& copy) {

	this->_type = copy._type;
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

}
