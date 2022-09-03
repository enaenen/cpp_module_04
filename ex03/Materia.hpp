#include "AMateria.hpp"

class Materia : public AMateria {
	Materia( void );
	Materia( std::string const& type );
	Materia( const Materia& ref );
	Materia& operator=( const Materia& ref );
	~Materia( void );
	// AMateria( std::string const& type );
	std::string const& getType() const;  // Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter& target );
};