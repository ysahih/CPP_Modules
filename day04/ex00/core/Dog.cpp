#include "../include/Dog.hpp"

Dog::Dog() {

    std::cout << "Dog: Default Constructor called!" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {

    std::cout << "Dog: Destructor called!" << std::endl;
}

Dog::Dog(std::string &type) {

    std::cout << "Dog: Parametrized Constructor called!" << std::endl;
    this->type = type;
}

Dog::Dog(const Dog &copy) {

    std::cout << "Dog: copy Constructor called!" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
    std::cout << "Dog: copy Assignment operator called!" << std::endl;
    this->type = copy.type;
    return *this;
}

void Dog::makeSound() const{
    
    std::cout << this->type << " is barking!" << std::endl;
}