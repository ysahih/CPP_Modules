#include "../include/Dog.hpp"

Dog::Dog() {

	std::cout << "Dog: Default Constructor called!" << std::endl;
	this->type = "Dog";
	this->ideas = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called!" << std::endl;
	delete this->ideas;
}

Dog::Dog(std::string &type) {

	std::cout << "Dog: Parametrized Constructor called!" << std::endl;
	this->type = type;
	this->ideas = new Brain();
}

Dog::Dog(const Dog &copy) {

	std::cout << "Dog: copy Constructor called!" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
	std::cout << "Dog: copy Assignment operator called!" << std::endl;
	this->type = copy.type;
	this->ideas = copy.ideas;
	return *this;
}

void Dog::makeSound() const{
	
	std::cout << this->type << " is barking!" << std::endl;
}