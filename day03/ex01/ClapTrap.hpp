#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected :
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;

public :
	ClapTrap();
	ClapTrap(ClapTrap &a);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap& operator=(ClapTrap &a);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};



#endif