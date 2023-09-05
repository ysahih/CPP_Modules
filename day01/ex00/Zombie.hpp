#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){

	std::cout << std::endl << "destructor caught " << this->name << std::endl;
}

Zombie* newZombie( std::string name );
void randomChump( std::string name );

void randomChump( std::string name ){

	Zombie *zombie;
    
	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}

#endif