#include "WrongCat.hpp"



int main(){
    // const WrongAnimal* meta = new Animal();
    // const WrongAnimal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    // std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    return 0;
}