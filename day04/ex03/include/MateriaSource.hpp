#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

// #include "Character.hpp"
#include "Character.hpp"

class IMateriaSource {
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
    private:
        AMateria* m[4];
        leftover *left;
    public:
        MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource&copy);
		~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

void collect_materia(leftover** left, AMateria *m);
int empty_slot(AMateria *m[4]);
void delete_materias(AMateria *m[4] , int max);
void delete_leftovers(leftover *lo);
#endif