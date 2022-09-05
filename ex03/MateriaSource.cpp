#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for ( int i = 0; i < SLOT_MAX; i++ ) this->slot[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& ref ) {
	for ( int i = 0; i < SLOT_MAX; i++ ) {
		if ( ref.slot[i] )
			this->slot[i] = ref.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& ref ) {
	for ( int i = 0; i < SLOT_MAX; i++ ) {
		if ( ref.slot[i] ) {
			if ( this->slot[i] )
				delete slot[i];
			this->slot[i] = ref.slot[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for ( int i = 0; i < SLOT_MAX; i++ ) delete this->slot[i];
}

void MateriaSource::learnMateria( AMateria* materia ) {
	for ( int i = 0; i < SLOT_MAX; i++ ) {
		if ( !this->slot[i] ) {
			this->slot[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria( const std::string& type ) {
	for ( int i = 0; i < SLOT_MAX; i++ ) {
		if ( this->slot[i] && this->slot[i]->getType() == type )
			return this->slot[i]->clone();
	}
	return NULL;
}