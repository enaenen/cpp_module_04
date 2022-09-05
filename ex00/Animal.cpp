#include "Animal.hpp"

Animal::Animal( void ) {
	type = "NONE";
	std::cout << "Animal [ Defalut ] Constructor Called " << std::endl;
}

Animal::Animal( std::string type ) : type( type ) {
	std::cout << "Animal [ String ] Constructor Called " << std::endl;
}

Animal::Animal( const Animal& ref ) {
	std::cout << "Animal [ Copy ] Constructor Called " << std::endl;
	*this = ref;
}
Animal::~Animal( void ) {
	std::cout << "Animal [ Destructor ] Called " << std::endl;
}

Animal& Animal::operator=( const Animal& ref ) {
	std::cout << "Animal Copy Operator Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
	}
	return ( *this );
}

std::string Animal::getType( void ) const {
	return type;
}
void Animal::setType( std::string type ) {
	this->type = type;
}
void Animal::makeSound( void ) const {
	std::cout << "****** THIS IS ANIMAL SO SOUND WILL BE OVERWRITED *******"
			  << std::endl;
}