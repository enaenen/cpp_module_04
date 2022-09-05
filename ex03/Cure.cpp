#include "Cure.hpp"

Cure::Cure() : AMateria( "cure" ) {
}

Cure::Cure( const Cure& ref ) : AMateria( ref ){};

Cure& Cure::operator=( const Cure& ref ) {
	if ( this != &ref )
		type = ref.type;

	return *this;
}

Cure::~Cure() {
}

AMateria* Cure::clone() const {
	return new Cure( *this );
}

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
}