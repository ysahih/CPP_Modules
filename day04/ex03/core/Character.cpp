#include "../include/Character.hpp"


Character::Character() {
	this->name = "character";
	for (int i=0; i<4; i++)
		this->m[i] = nullptr;
}

void delete_materias(AMateria *m[4] , int max) {
	for (int i=0; m[i] && i<max; i++)
		delete m[i];
}

Character::~Character() {
	delete_materias(this->m, 4);
}

Character::Character(const std::string& name) {

	this->name = name;
	for (int i=0; i<4; i++)
		this->m[i] = nullptr;
}

Character::Character(const Character& copy) {
	*this = copy;
}

Character& Character::operator=(const Character&copy) {
	delete_materias(this->m, 4);
	this->name = copy.getName();
	for (int i=0; copy.m[i]; i++) {
		this->m[i] = copy.m[i]->clone();
	}
	return *this;
}

int empty_slot(AMateria *m[4]) {
	int i = 0;
	while (m[i] != nullptr)
		i++;
	return i;
}

void Character::equip(AMateria* m) {

	int index = empty_slot(this->m);
	if (index < 4)
		this->m[index] = m;
	else {

	}
}

void Character::unequip(int idx) {

	if (idx < 4 && this->m[idx] != nullptr) {
		this->m[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->m[idx])
		this->m[idx]->use(target);
}

std::string const& Character::getName() const {
	return this->name;
}