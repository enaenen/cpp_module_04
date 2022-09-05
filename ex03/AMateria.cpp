#include "AMateria.hpp"

AMateria::AMateria( std::string const& type ) : type( type ) {}

AMateria::AMateria( const AMateria& ref ) : type( ref.type ) {}

AMateria& AMateria::operator=( const AMateria& ref ) {
	(void)&ref;
	return *this;
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const { return ( type ); }

void AMateria::use( ICharacter& target ) {
	std::cout << target.getName() << " is using NULL materia " << std::endl;
}
