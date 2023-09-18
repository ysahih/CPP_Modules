#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat(std::string &type);
		WrongCat& operator=(const WrongCat&copy);
		~WrongCat();
		void makeSound() const;
};

#endif