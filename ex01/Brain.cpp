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
		for ( int i = 0; i < MAX; i++ ) {
			ideas[i] = ref.ideas[i];
		}
	}
	return *this;
}
Brain::~Brain( void ) {
	std::cout << "Brain [ Destructor ] Called " << std::endl;
}

std::string Brain::getIdeas( unsigned int index ) const {
	if ( MAX <= index )
		return std::string();
	return ideas[index];
}
void Brain::setIdeas( const std::string idea, unsigned int index ) {
	if ( MAX <= index )
		ideas[index] = idea;
}
