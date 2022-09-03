#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );
		ICharacter* me = new Character( "me" );
		AMateria* tmp;
		tmp = src->createMateria( "ice" );
		me->equip( tmp );
		tmp = src->createMateria( "cure" );
		me->equip( tmp );
		ICharacter* bob = new Character( "bob" );
		me->use( 0, *bob );
		me->use( 1, *bob );
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;
		// system( "leaks ex03" );
		std::cout << std::endl;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );
		src->learnMateria( new Ice() );

		// 5th MAteria
		AMateria* tmp;
		tmp = new Cure();
		src->learnMateria( tmp );

		delete tmp;
		std::cout << "deleted cure." << std::endl;

		ICharacter* jason = new Character( "jason" );
		tmp = src->createMateria( "ice" );
		jason->equip( tmp );
		tmp = src->createMateria( "cure" );
		jason->equip( tmp );
		jason->equip( NULL );
		tmp = src->createMateria( "cure" );
		jason->equip( tmp );

		ICharacter* bob = new Character( "bob" );
		jason->use( 0, *bob );
		jason->use( 1, *bob );
		jason->use( 0, *bob );  // use empty slot
		jason->use( 3, *bob );

		delete bob;
		delete jason;
		delete src;
	}
	{
		std::cout << std::endl;
		// system( "leaks ex03" );
		std::cout << std::endl;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );

		AMateria* tmp;
		ICharacter* jason = new Character( "jason" );
		tmp = src->createMateria( "ice" );
		jason->equip( tmp );
		tmp = src->createMateria( "cure" );
		jason->equip( tmp );
		tmp = src->createMateria( "cure" );
		jason->equip( tmp );

		AMateria* floor = tmp;
		tmp = NULL;

		jason->unequip( 2 );
		delete floor;
		std::cout << "deleted cure." << std::endl;
		// floor = NULL;
		// (void)floor;

		jason->unequip( 5 );

		ICharacter* bob = new Character( "bob" );
		jason->use( 0, *bob );
		jason->use( 0, *bob );

		*bob = *jason;  // not copied.

		bob->use( 0, *jason );
		bob->use( 1, *jason );
		bob->use( 2, *jason );

		static_cast<Character&>( *bob ) = static_cast<Character&>( *jason );

		bob->use( 1, *jason );
		jason->use( 1, *bob );

		delete bob;
		delete jason;
		delete src;
	}
	return 0;
}
