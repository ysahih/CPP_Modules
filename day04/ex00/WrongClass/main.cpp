#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
	WrongAnimal* aa = new WrongCat();
	aa->makeSound();
	delete aa;
	return 0;
}