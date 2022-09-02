#pragma once
#include <iostream>

class AAnimal {
   protected:
	std::string type;

   public:
	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( const AAnimal& ref );
	virtual ~AAnimal( void );

	AAnimal& operator=( const AAnimal& ref );

	std::string getType( void ) const;
	void setType( std::string type );
	virtual void makeSound( void ) const = 0;
};
