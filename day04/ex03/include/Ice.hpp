#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {
	public:
		Ice();
		// Ice(const Ice& copy);
		// Ice& operator=(const Ice& copy);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif