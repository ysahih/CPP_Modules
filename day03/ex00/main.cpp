#include "ClapTrap.hpp"
#include <unistd.h>

int main (){

    ClapTrap claptrap("holly-molly!");
    
    ClapTrap a;

    claptrap.attack("slave");
    claptrap.takeDamage(10);
    a = claptrap;
    a.attack("pholan");
    a.beRepaired(10);
    a.attack("pholan");
    return 0;
}