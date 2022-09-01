#pragma once

#include <iostream>

class WrongAnimal {
   protected:
	std::string type;

   public:
	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( const WrongAnimal& ref );
	~WrongAnimal( void );
	WrongAnimal& operator=( const WrongAnimal& ref );

	void setType( std::string type );
	std::string getType( void ) const;
	void makeSound( void ) const;
};