#include "../include/MateriaSource.hpp"

Character::Character() {
	this->name = "character";

	for (int i=0; i<4; i++)
		this->m[i] = NULL;
	
	this->left = NULL;
}

Character::~Character() {
	delete_materias(this->m, 4);
	delete_leftovers(this->left);
}

Character::Character(const std::string& name) {

	this->name = name;
	for (int i=0; i<4; i++)
		this->m[i] = NULL;
	this->left = NULL;
}

Character::Character(const Character& copy) {
	*this = copy;
}

Character& Character::operator=(const Character& copy) {

	delete_materias(this->m, 4);
	this->name = copy.getName();
	for (int i=0; copy.m[i]; i++) {
		this->m[i] = copy.m[i]->clone();
	}

	*this->left = *copy.left;
	return *this;
}


void Character::equip(AMateria* m) {

	int index = empty_slot(this->m);
	if (index < 4)
		this->m[index] = m;
	else 
		collect_materia(&this->left, m);
}

void Character::unequip(int idx) {

	if (idx < 4 && this->m[idx] != NULL) {
		collect_materia(&this->left, this->m[idx]);
		this->m[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->m[idx])
		this->m[idx]->use(target);
}

std::string const& Character::getName() const {
	return this->name;
}