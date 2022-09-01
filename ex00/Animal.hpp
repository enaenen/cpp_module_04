#pragma once
#include <iostream>

class Animal {
   protected:
	std::string type;

   public:
	Animal( void );
	Animal( std::string type );
	Animal( const Animal& ref );
	virtual ~Animal( void );

	Animal& operator=( const Animal& ref );

	std::string getType( void ) const;
	void setType( std::string type );
	virtual void makeSound( void ) const;
};
