#include "include/Cat.hpp"
#include "include/Dog.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;//should not create a leak
    delete i;
    
    return 0;
}