#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define SLOT_MAX 4

class MateriaSource : public IMateriaSource {
   private:
	AMateria* slot[SLOT_MAX];

   public:
	MateriaSource();
	MateriaSource( const MateriaSource& source );
	MateriaSource& operator=( const MateriaSource& source );
	~MateriaSource();
	virtual void learnMateria( AMateria* materia );
	virtual AMateria* createMateria( const std::string& type );
};
