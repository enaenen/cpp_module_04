#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {
	std::cout << "WrongCat [ Defalut ] Constructor Called " << std::endl;
}

WrongCat::WrongCat( const WrongCat& ref ) : WrongAnimal( "Wrongcat" ) {
	std::cout << "WrongCat [ Copy ] Constructor Called " << std::endl;
	*this = ref;
}
WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat [ Destructor ]  Called " << std::endl;
}
WrongCat& WrongCat::operator=( const WrongCat& ref ) {
	std::cout << "WrongCat Copy Operator Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
	}
	return *this;
}

void WrongCat::makeSound( void ) const {
	std::cout << "MEOWWWWWWWWWWWWW" << std::endl;
}