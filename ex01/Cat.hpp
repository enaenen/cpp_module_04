#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   private:
	Brain* brain;

   public:
	Cat( void );
	Cat( const Cat& ref );
	Cat& operator=( const Cat& ref );
	virtual ~Cat( void );

	virtual void makeSound( void ) const;
	Brain* getBrain( void ) const;
	void setBrain( unsigned int index, const std::string idea ) const;
	void setBrain( unsigned int index, const char* idea ) const;

	void printBrainIdeas( void ) const;
};