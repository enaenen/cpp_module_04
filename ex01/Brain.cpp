#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain [ Default ] constructor." << std::endl;
}
Brain::Brain( const Brain& ref ) {
	std::cout << "Brain [ Copy ] constructor." << std::endl;
	*this = ref;
}
Brain& Brain::operator=( const Brain& ref ) {
	std::cout << "Brain [ Copy Assignment ] Called " << std::endl;
	if ( this != &ref ) {
		for ( int i = 0; i < CAPACITY; i++ ) {
			ideas[i] = ref.ideas[i];
		}
	}
	return *this;
}
Brain::~Brain( void ) {
	std::cout << "Brain [ Destructor ] Called " << std::endl;
}

std::string Brain::getIdeas( unsigned int index ) const {
	if ( CAPACITY <= index )
		return std::string();
	return ideas[index];
}

void Brain::setIdeas( unsigned int index, const std::string idea ) {
	if ( index < CAPACITY )
		ideas[index] = idea;
	// std::cout << "setIDEA " << index << idea << "XXX" << ideas[index]
	//   << std::endl;
}
