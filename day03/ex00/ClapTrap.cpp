#include "ClapTrap.hpp"

/*	When ClapTrack attacks, it causes its target to lose <attack damage> hit points.    
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing  
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
or energy points left.
*/

ClapTrap::ClapTrap(void) {

	std::cout << "You should name your Clap-Trap!" << std::endl;
	exit(0);
}

ClapTrap::~ClapTrap(){

	std::cout << "Destructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
	
	std::cout << "Parametrized Constructor called" << std::endl;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

void ClapTrap::attack(const std::string &target ) {

	if (this->_energy_points <= 0) {
		std::cout << "no enough Energy Points!" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "no enough Hit Points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy_points <= 0) {
		std::cout << "no enough Energy Points!" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "no enough Hit Points!" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " Got " << amount << " of Hit Points" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {

	this->_attack_damage += amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage!" << std::endl;
}
