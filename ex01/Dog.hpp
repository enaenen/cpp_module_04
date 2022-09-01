#pragma once

#include "Animal.hpp"

class Dog : public Animal {
   public:
	Dog( void );
	Dog( std::string name );
	Dog( const Dog& ref );
	virtual ~Dog( void );

	Dog& operator=( const Dog& ref );
	virtual void makeSound( void ) const;
};
