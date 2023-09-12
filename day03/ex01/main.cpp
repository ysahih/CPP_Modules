#include "ScavTrap.hpp"


int main (){

    ScavTrap n("frex");

    n.attack("slave");
    ClapTrap claptrap("holly-molly!");
    claptrap.takeDamage(10);

    n.takeDamage(100);
    n.attack("slave");
    claptrap.attack("pholan");
    return 0;
}