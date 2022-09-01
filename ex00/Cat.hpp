#pragma once

#include "Animal.hpp"

class Cat : public Animal {
   public:
	Cat( void );
	Cat( std::string name );
	Cat( const Cat& ref );
	virtual ~Cat( void );
	Cat& operator=( const Cat& ref );

	virtual void makeSound( void ) const;
};