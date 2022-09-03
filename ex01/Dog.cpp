#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << "Dog [ Defalut ] Constructor Called " << std::endl;
	brain = new Brain();
}

Dog::Dog( const Dog& ref ) {
	std::cout << "Dog [ Copy Constructor ] Called " << std::endl;
	brain = new Brain();
	*brain = *ref.brain;
}
Dog::~Dog( void ) {
	std::cout << "Dog [ Destructor ]  Called " << std::endl;
	delete brain;
}
Dog& Dog::operator=( const Dog& ref ) {
	std::cout << "Dog [ Copy Assignment ]Called " << std::endl;
	if ( this != &ref ) {
		type = ref.type;
		if ( brain ) {
			delete brain;
			brain = NULL;
		}
		brain = new Brain();
		*brain = *ref.brain;
	}
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << "BARRRRKKKKKKKKK" << std::endl;
}

Brain* Dog::getBrain( void ) const { return brain; }

void Dog::setBrain( unsigned int index, const std::string content ) {
	brain->setIdeas( index, content );
}
void Dog::setBrain( unsigned int index, const char* content ) {
	std::string content_str( content );
	brain->setIdeas( index, content_str );
}
void Dog::printBrainIdeas( void ) const {
	int i = 0;
	while ( !( brain->getIdeas( i ).empty() ) ) {
		std::cout << brain->getIdeas( i ) << std::endl;
		i++;
	}
}