#include "../include/Cat.hpp"

Cat::Cat() {

	std::cout << "Cat: Default Constructor called!" << std::endl;
	this->type = "Cat";
	this->ideas = new Brain();
}

Cat::~Cat() {

	std::cout << "Cat: Destructor called!" << std::endl;
	delete this->ideas;
}

Cat::Cat(std::string &type) {

	std::cout << "Cat: Parametrized Constructor called!" << std::endl;
	this->type = type;
	this->ideas = new Brain();
}

Cat::Cat(const Cat &copy) {

	std::cout << "Cat: copy Constructor called!" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
	std::cout << "Cat: copy Assignment operator called!" << std::endl;
	this->type = copy.type;
	if (this->ideas)
		delete this->ideas;
	this->ideas = new Brain();
	*this->ideas = *copy.ideas;
	return *this;
}

void Cat::makeSound() const{
	
	std::cout << this->type << " is meowing!" << std::endl;
}