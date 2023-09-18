#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *ideas;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog(std::string &type);
		Dog& operator=(const Dog&copy);
		~Dog();
		void makeSound() const;

};

#endif