#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	std::cout << "ClapTrap: Default constructor called!" << std::endl;
    this->_name = "claptrap";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &a) {

	std::cout << "ClapTrap: copy constructor called!" << std::endl;
	*this = a;
}

ClapTrap::~ClapTrap(){

	std::cout << "ClapTrap: Destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a) {

	std::cout << "ClapTrap: copy operator assignment called!" << std::endl;
    this->_name = a._name;
    this->_hit_points = a._hit_points;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    return *this;
}

ClapTrap::ClapTrap(std::string name) : _name(name){

	std::cout << "ClapTrap: Parametrized Constructor called" << std::endl;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

void ClapTrap::attack(const std::string &target ) {

	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap: "  << this->_name << " has no enough Energy Points!" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap: " << this->_name << " has no enough Hit Points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy_points <= 0) {
		std::cout << this->_name << " has no enough Energy Points!" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << this->_name << " has no enough Energy Points!" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << this->_name << " Got " << amount << " of Hit Points" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (this->_hit_points > amount) {

	    this->_hit_points -= amount;
	    std::cout << this->_name << " takes " << amount << " of damage!" << std::endl;
    }
    else {
	    std::cout << this->_name << " is dead!" << std::endl;
        this->_hit_points = 0;
    }
}
