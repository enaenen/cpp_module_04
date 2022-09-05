#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
   public:
	Cure( void );
	Cure( const Cure& ref );
	Cure& operator=( const Cure& ref );
	virtual ~Cure( void );
	virtual AMateria* clone( void ) const;
	virtual void use( ICharacter& target );
};
