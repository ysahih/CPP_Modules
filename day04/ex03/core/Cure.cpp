#include "../include/Cure.hpp"

Cure::Cure() {
	this->_type = "Cure";
}

Cure::~Cure () {

}

// Cure::Cure(const Cure& copy) {
// 	*this = copy;
// }

// Cure &Cure::operator=(const Cure& copy) {

// 	//copying
// }

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}