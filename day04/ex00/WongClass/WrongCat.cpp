#include "WrongCat.hpp"

WrongCat::WrongCat() {

    std::cout << "WrongCat: Default Constructor called!" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat() {

    std::cout << "WrongCat: Destructor called!" << std::endl;
}

WrongCat::WrongCat(std::string &type) {

    std::cout << "WrongCat: Parametrized Constructor called!" << std::endl;
    this->type = type;
}

WrongCat::WrongCat(const WrongCat &copy) {

    std::cout << "WrongCat: copy Constructor called!" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
    std::cout << "WrongCat: copy Assignment operator called!" << std::endl;
    this->type = copy.type;
    return *this;
}

void WrongCat::makeSound() const{
    
    std::cout << this->type << " is meowing!" << std::endl;
}