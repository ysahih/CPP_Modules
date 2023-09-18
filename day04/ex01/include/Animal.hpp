#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/*These two derived classes must set their type field depending on their name. Then,
the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
The type of the Animal class can be left empty or set to the value of your choice.*/

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &copy);
		Animal(std::string &type);
		Animal& operator=(const Animal& copy);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;

};


#endif