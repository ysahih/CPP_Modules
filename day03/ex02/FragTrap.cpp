#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap: Default Constructor called!" << std::endl;
    this->_name = "fragtrap";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap: Parametrized Constructor called!" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy){
    std::cout << "FragTrap: copy Constructor called!" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy) {

    std::cout << "FragTrap: copy asignment operator called!" << std::endl;
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap: destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->_name << "High Five !" << std::endl;
}

void FragTrap::attack(const std::string &target ) {

	if (this->_energy_points <= 0) {
		std::cout<< "FragTrap: "  << this->_name << " has no enough Energy Points!" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "FragTrap: " << this->_name << " has no enough Hit Points!" << std::endl;
		return ;
	}
	std::cout << "FragTrap: " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}