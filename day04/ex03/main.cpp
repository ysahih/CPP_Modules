#include "include/Character.hpp"
#include "include/Ice.hpp"
#include "include/Cure.hpp"

int main() 
{

    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp = new Ice();
    // tmp = src->createMateria("ice");
    me->equip(tmp);
    // tmp = src->createMateria("cure");

    tmp = new Cure();
    me->equip(tmp); //1

    tmp = new Ice();
    me->equip(tmp); //2 

    me->unequip(1);
    tmp = new Cure();
    me->equip(tmp); //3

    tmp = new Ice();
    me->equip(tmp); //4
    ICharacter* bob = new Character("bob");
    me->use(3, *bob);

    me->use(1, *bob);
    delete bob;
    delete me;
    // delete src
}