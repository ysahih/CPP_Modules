	#ifndef CAT_HPP
	#define CAT_HPP

	#include <iostream>
	#include "Animal.hpp"
	#include "Brain.hpp"

	class Cat : public Animal {
		private:
			Brain *ideas;
		public:
			Cat();
			Cat(const Cat& copy);
			Cat(std::string &type);
			Cat& operator=(const Cat&copy);
			~Cat();
			void makeSound() const;

	};

	#endif