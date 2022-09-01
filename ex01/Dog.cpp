#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << "Dog [ Defalut ] Constructor Called " << std::endl;
}

Dog::Dog( const Dog& ref ) {
	std::cout << "Dog [ Copy Constructor ] Called " << std::endl;
	*this = ref;
}
Dog::~Dog( void ) {
	std::cout << "Dog [ Destructor ]  Called " << std::endl;
	delete brain;
}
Dog& Dog::operator=( const Dog& ref ) {
	std::cout << "Dog [ Copy Assignment ]Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
	}
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << "BARRRRKKKKKKKKK" << std::endl;
}