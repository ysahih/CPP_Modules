#include "include/Cat.hpp"
#include "include/Dog.hpp"


void fun(){
    system("leaks Animal");
}

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = j;
    atexit(fun);

    Cat j;
    Cat i = j;
    // i.setter();

    j.makeSound();
    i.makeSound();

    // delete j;//should not create a leak
    // delete i;
    
    return 0;
}