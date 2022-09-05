#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {
}

Ice::Ice( const Ice& ref ) : AMateria( ref ) {
}

Ice& Ice::operator=( const Ice& ref ) {
	if ( this != &ref )
		type = ref.type;
	return *this;
}

Ice::~Ice( void ) {
}

AMateria* Ice::clone( void ) const {
	return new Ice( *this );
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}