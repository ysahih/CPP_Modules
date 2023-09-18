
#include "../include/MateriaSource.hpp"


MateriaSource::MateriaSource() {

	for (int i=0; i<4; i++)
		this->m[i] = NULL;
	
	this->left = NULL;
}

MateriaSource::~MateriaSource() {
	delete_materias(this->m, 4);
	delete_leftovers(this->left);
}


MateriaSource::MateriaSource(const MateriaSource& copy) {
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource&copy) {
	delete_materias(this->m, 4);
	for (int i=0; copy.m[i]; i++) {
		this->m[i] = copy.m[i]->clone();
	}
	this->left = NULL;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {

	int index = empty_slot(this->m);
	if (index < 4)
		this->m[index] = m;
	else 
		collect_materia(&this->left, m);
}

AMateria* MateriaSource::createMateria(std::string const & type) {

    int i = -1;
    while (this->m[++i])
        if (this->m[i]->getType() == type)
            return this->m[i]->clone();
    return 0;
}
