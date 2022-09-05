#pragma once

#include <iostream>
#include "ICharacter.hpp"

#define BAG_SLOT_MAX 4

class Character : public ICharacter {
   private:
	std::string name;
	AMateria* materia[BAG_SLOT_MAX];

   public:
	Character( void );
	Character( std::string name );
	Character( const Character& ref );
	Character& operator=( const Character& ref );
	virtual ~Character( void );

	virtual std::string const& getName() const;
	virtual void equip( AMateria* m );
	virtual void unequip( int idx );
	virtual void use( int idx, ICharacter& target );
};