#include "../include/MateriaSource.hpp"

Cure::Cure() {
	this->_type = "cure";
}

Cure::~Cure () {

}

Cure::Cure(const Cure& copy) {
	*this = copy;
}

Cure &Cure::operator=(const Cure& copy) {

	this->_type = copy._type;
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
