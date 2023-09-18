#include "../include/Brain.hpp"

Brain::Brain() {

	std::cout << "Brain: Default Constructor called!" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: Destructor called!" << std::endl;
}

Brain::Brain(const Brain &copy) {

	std::cout << "Brain: copy Constructor called!" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy) {
	std::cout << "Brain: copy Assignment operator called!" << std::endl;
    for (int i=0; i<100; i++) {
        this->_ideas[i] = copy._ideas[i];
    }
	return *this;
}
