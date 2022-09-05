#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
   public:
	Ice( void );
	Ice( const Ice& ref );
	Ice& operator=( const Ice& ref );
	~Ice( void );
	virtual AMateria* clone( void ) const;
	virtual void use( ICharacter& target );
};