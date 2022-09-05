#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ) : name( "NoName" ) {
	for ( int i = 0; i < BAG_SLOT_MAX; i++ ) {
		this->materia[i] = NULL;
	}
}

Character::Character( std::string name ) : name( name ) {
	for ( int i = 0; i < BAG_SLOT_MAX; i++ ) {
		this->materia[i] = NULL;
	}
}

Character::Character( const Character& ref ) : name( ref.name ) {
	for ( int i = 0; i < BAG_SLOT_MAX; i++ ) {
		if ( ref.materia[i] )
			this->materia[i] = ref.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
}

Character& Character::operator=( const Character& ref ) {
	if ( this != &ref ) {
		for ( int i = 0; i < BAG_SLOT_MAX; i++ ) {
			if ( materia[i] )
				delete materia[i];
			if ( ref.materia[i] )
				materia[i] = ref.materia[i]->clone();
		}
	}
	return *this;
}
Character::~Character( void ) {
	for ( int i = 0; i < BAG_SLOT_MAX; i++ )
		if ( materia[i] )
			delete materia[i];
}
std::string const& Character::getName() const { return name; }

void Character::equip( AMateria* get ) {
	for ( int i = 0; i < BAG_SLOT_MAX; i++ ) {
		if ( !this->materia[i] ) {
			this->materia[i] = get;
			return;
		}
	}
}
void Character::unequip( int idx ) {
	if ( idx < 0 || BAG_SLOT_MAX <= idx )
		return;
	this->materia[idx] = NULL;
}
void Character::use( int idx, ICharacter& target ) {
	if ( idx < 0 || BAG_SLOT_MAX <= idx )
		return;

	if ( materia[idx] )
		materia[idx]->use( target );
}