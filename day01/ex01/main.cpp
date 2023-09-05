#include "Zombie.hpp"

int main()
{
    Zombie *z;
    z = zombieHorde(8, "ucef");
    for (int i = 0; i<10; i++){
        z[i].announce();
    }
    delete[] z;
}