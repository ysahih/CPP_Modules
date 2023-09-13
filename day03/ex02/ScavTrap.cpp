#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name <<" is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_name = "scavtrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "ScavTrap: paramitrized constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy){
    std::cout << "ScavTrap: copy Constructor called!" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {

    std::cout << "ScavTrap: copy asignment operator called!" << std::endl;
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return *this;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap: destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {

	if (this->_energy_points <= 0) {
		std::cout<< "ScavTrap: "  << this->_name << " has no enough Energy Points!" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ScavTrap: " << this->_name << " has no enough Hit Points!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}