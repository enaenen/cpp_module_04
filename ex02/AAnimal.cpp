#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {
	std::cout << "AAnimal [ Defalut ] Constructor Called " << std::endl;
}

AAnimal::AAnimal( std::string type ) : type( type ) {
	std::cout << "AAnimal [ String ] Constructor Called " << std::endl;
}

AAnimal::AAnimal( const AAnimal& ref ) {
	std::cout << "AAnimal [ Copy ] Constructor Called " << std::endl;
	*this = ref;
}
AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal [ Destructor ] Called " << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& ref ) {
	std::cout << "AAnimal Copy Operator Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
	}
	return ( *this );
}

std::string AAnimal::getType( void ) const { return type; }
void AAnimal::setType( std::string type ) { this->type = type; }