#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "Materia.hpp"

class Character : public ICharacter {
   private:
	std::string name;
	AMateria* materia;

   public:
	Character( void );
	Character( std::string name );
	Character( const Character& ref );
	Character& operator=( const Character& ref );
	virtual ~Character( void );

	virtual std::string const& getName();
	virtual void equip( AMateria* m );
	virtual void unequip( int idx );
	virtual void use( int idx, ICharacter& target );
};