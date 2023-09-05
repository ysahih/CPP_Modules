#include "Zombie.hpp"

Zombie::Zombie(){
	this->name = "annonymos";
}

Zombie::~Zombie(){

	std::cout << std::endl << "destructor caught " << this->name << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name){
	this->name = name;
}
