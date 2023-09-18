#include "../include/Animal.hpp"

Animal::Animal() {

    std::cout << "Animal: Default Constructor called!" << std::endl;
    this->type = "Animal";
}

Animal::~Animal() {

    std::cout << "Animal: Destructor called!" << std::endl;
}

Animal::Animal(std::string &type) {

    std::cout << "Animal: Parametrized Constructor called!" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &copy) {

    std::cout << "Animal: copy Constructor called!" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal& copy) {
    std::cout << "Animal: copy Assignment operator called!" << std::endl;
    this->type = copy.type;
    return *this;
}

std::string Animal::getType() const{

    return this->type;
}

