#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
   private:
	Brain* brain;

   public:
	Dog( void );
	Dog( const Dog& ref );
	virtual ~Dog( void );

	Dog& operator=( const Dog& ref );
	virtual void makeSound( void ) const;
};
