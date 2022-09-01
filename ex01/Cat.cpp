#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << "Cat [ Defalut ] Constructor Called " << std::endl;
	brain = new Brain();
}

Cat::Cat( const Cat& ref ) : Animal( "Cat" ) {
	std::cout << "Cat [ Copy ] Constructor Called " << std::endl;
	brain = new Brain();
	*brain = *ref.brain;
}

Cat::~Cat( void ) {
	std::cout << "Cat [ Destructor ]  Called " << std::endl;
	delete brain;
}

Cat& Cat::operator=( const Cat& ref ) {
	std::cout << "Cat [ Copy Assignment ] Called " << std::endl;
	if ( this != &ref ) {
		type = ref.getType();
		if ( brain ) {
			delete brain;
			brain = NULL;
		}
		brain = new Brain();
		*brain = *ref.brain;
	}
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << "MEOWWWWWWWWWWWWW" << std::endl;
}

Brain* Cat::getBrain( void ) const { return brain; }

void Cat::setBrain( const std::string idea, unsigned int index ) const {
	brain->setIdeas( idea, index );
}

// void Cat::setBrain( const char* idea, unsigned int index ) const {
// 	std::string tmp = idea;
// 	brain->setIdeas( tmp, index );
// }

void Cat::printBrainIdeas( void ) const {
	int i( 0 );
	while ( *( brain->getIdeas( i ).c_str() ) ) {
		std::cout << brain->getIdeas( i ) << std::endl;
		i++;
	}
}