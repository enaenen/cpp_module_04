#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << "Cat [ Defalut ] Constructor Called " << std::endl;
}

Cat::Cat( const Cat& ref ) {
	std::cout << "Cat [ Copy ] Constructor Called " << std::endl;
	*this = ref;
}

Cat::~Cat( void ) { std::cout << "Cat [ Destructor ]  Called " << std::endl; }

Cat& Cat::operator=( const Cat& ref ) {
	std::cout << "Cat Copy Operator Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
	}
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << "MEOWWWWWWWWWWWWW" << std::endl;
}