#include "../include/AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria(std::string const &type) {
    this->_type = type;
}

// AMateria::AMateria(const AMateria &copy) {
// }

// AMateria& AMateria::operator=(const AMateria& copy) {
//     //copy
// }

std::string const& AMateria::getType() const {
    return this->_type;
}