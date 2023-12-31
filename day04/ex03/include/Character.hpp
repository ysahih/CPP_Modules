#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <climits>
#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


typedef struct lo
{
	AMateria *ptr;
	struct lo *next;
} leftover;

// class AMateria;
//---interface---//
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

//---concrete class---//
class Character :public ICharacter {
	private:
		std::string name;
		AMateria *m[4];
		leftover *left;
	public:
		Character();
		Character(const Character& copy);
		Character(const std::string& name);
		Character& operator=(const Character&copy);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};



#endif