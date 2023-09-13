#include "ScavTrap.hpp"


int main (){

    ScavTrap n("frex");
    // ScavTrap m("za3boul");
    // ClapTrap m("holly!");
    // ClapTrap *a = new ScavTrap();
    
    ClapTrap *b = &n;

    b->attack("slave");
    // a->attack("slave");
    
    // ClapTrap claptrap("holly-molly!");
    // a->takeDamage(10);

    // n.takeDamage(100);
    // n.attack("slave");
    // claptrap.attack("pholan");
    return 0;
}