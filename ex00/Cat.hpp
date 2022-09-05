#pragma once

#include "Animal.hpp"

class Cat : public Animal {
   public:
	Cat( void );
	Cat( const Cat& ref );
	virtual ~Cat( void );
	Cat& operator=( const Cat& ref );

	virtual void makeSound( void ) const;
};