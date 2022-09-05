#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
   private:
	AMateria();

   protected:
	const std::string type;

   public:
	AMateria( std::string const& type );
	AMateria( const AMateria& ref );
	AMateria& operator=( const AMateria& ref );
	virtual ~AMateria();
	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter& target );
};