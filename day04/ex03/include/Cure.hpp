#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
	public:
		Cure();
		// Cure(const Cure& copy);
		// Cure& operator=(const Cure& copy);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
