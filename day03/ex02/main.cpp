#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (){

    ScavTrap n("frex");
    FragTrap d("holly");
    ClapTrap *nn = &n;
    ClapTrap *dd = &d;


    dd->attack("slave");
    nn->attack("slave");
    // d.takeDamage(10);

    // d.takeDamage(100);
    // d.attack("slave");
    return 0;
}