#include "Character.hpp"

Character::Character( void ) {}
Character::Character( std::string name ) {}
Character::Character( const Character& ref ) {}
Character& Character::operator=( const Character& ref ) {}

std::string const& Character::getName() { return name; }
void Character::equip( AMateria* m ) {}
void Character::unequip( int idx ) {}
void Character::use( int idx, ICharacter& target ) {
	if ( this->materia[idx].getType().compare( "Ice" ) )
		std::cout << "* shoots an ice bolt at" << target.getName() << " *"
				  << std::endl;
	else if ( this->materia[idx].getType().compare( "Cure" ) )
		std::cout << "* heals " << target.getName() << "’s wounds *"
				  << std::endl;
}