#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << "WrongAnimal: Default Constructor called!" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {

    std::cout << "WrongAnimal: Destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string &type) {

    std::cout << "WrongAnimal: Parametrized Constructor called!" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {

    std::cout << "WrongAnimal: copy Constructor called!" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
    std::cout << "WrongAnimal: copy Assignment operator called!" << std::endl;
    this->type = copy.type;
    return *this;
}

std::string WrongAnimal::getType() const{

    return this->type;
}

void WrongAnimal::makeSound() const{

    std::cout << this->type << " is making a sound!" << std::endl;
}