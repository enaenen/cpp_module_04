#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
   public:
	WrongCat( void );
	WrongCat( const WrongCat &ref );
	WrongCat &operator=( const WrongCat &ref );
	~WrongCat( void );

	void makeSound( void ) const;
};
