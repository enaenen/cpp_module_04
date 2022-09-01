#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   private:
	Brain* brain;

   public:
	Cat( void );
	Cat( const Cat& ref );
	virtual ~Cat( void );
	Cat& operator=( const Cat& ref );

	virtual void makeSound( void ) const;

	Brain* getBrain( void ) const;
	void setBrain( const std::string idea, unsigned int index ) const;
	void setBrain( const char* idea, unsigned int index ) const;

	void printBrainIdeas( void ) const;
};