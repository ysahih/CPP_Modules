#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& copy);
		Dog(std::string &type);
		Dog& operator=(const Dog&copy);
		~Dog();
		void makeSound() const;

};

#endif