	#ifndef CAT_HPP
	#define CAT_HPP

	#include <iostream>
	#include "Animal.hpp"

	class Cat : public Animal {
		public:
			Cat();
			Cat(const Cat& copy);
			Cat(std::string &type);
			Cat& operator=(const Cat&copy);
			~Cat();
			void makeSound() const;

	};

	#endif