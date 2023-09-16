#ifndef AMATERIA_HPP
#define  AMATERIA_HPP


#include <iostream>

class ICharacter;

class AMateria {
    protected:
        std::string _type;

    public:
        AMateria();
        AMateria(std::string const & type);
        // AMateria(const AMateria& copy);
        // AMateria& operator=(const AMateria& copy);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual void use(ICharacter& target) = 0;
        virtual AMateria* clone() const = 0;
};


#endif