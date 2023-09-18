#include "include/MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);

    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->unequip(1);
    me->unequip(3);
    me->unequip(0);
    me->unequip(2);
    me->equip(new Ice());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());
    me->equip(new Cure());


    // tmp = src->createMateria("cure");

    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
    return 0;
}
