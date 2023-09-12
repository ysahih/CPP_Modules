#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name <<" is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "paramitrized child constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap() {

   std::cout << "Child destructor called" << std::endl;
}