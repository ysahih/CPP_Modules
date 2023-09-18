#include "include/Cat.hpp"
#include "include/Dog.hpp"


void fun(){
    system("leaks Animal");
}

int main()
{
    const Animal* d = new Dog();
    // const Animal* i = j;
    // atexit(fun);

    d->makeSound();
    // Cat j;
    // Cat i = j;
    // // i.setter();

    // j.makeSound();
    // i.makeSound();

    delete d;//should not create a leak
    // delete i;
    
    return 0;
}