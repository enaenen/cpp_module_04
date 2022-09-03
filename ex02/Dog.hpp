#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
   private:
	Brain* brain;

   public:
	Dog( void );
	Dog( const Dog& ref );
	Dog& operator=( const Dog& ref );
	virtual ~Dog( void );

	virtual void makeSound( void ) const;
	Brain* getBrain( void ) const;
	void setBrain( unsigned int index, const std::string content );
	void setBrain( unsigned int index, const char* content );
	void printBrainIdeas( void ) const;
};
