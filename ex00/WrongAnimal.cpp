#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	type = "NONE";
	std::cout << "WrongAnimal [ Defalut ] Constructor Called " << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type( type ) {
	std::cout << "WrongAnimal [ String ] Constructor Called " << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& ref ) {
	std::cout << "WrongAnimal [ Copy ] Constructor Called " << std::endl;
	*this = ref;
}
WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal [ Destructor ] Called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& ref ) {
	std::cout << "WrongAnimal Copy Operator Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
	}
	return ( *this );
}

std::string WrongAnimal::getType( void ) const {
	return type;
}
void WrongAnimal::setType( std::string type ) {
	this->type = type;
}
void WrongAnimal::makeSound( void ) const {
	std::cout
		<< "****** THIS IS WrongAnimal SO SOUND WILL BE OVERWRITED *******"
		<< std::endl;
}