#include "../include/MateriaSource.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& copy) {

	this->_type = copy.getType();
	return *this;
}

std::string const& AMateria::getType() const {
	return this->_type;
}
