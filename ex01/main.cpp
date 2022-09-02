#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	{
		Animal *a1 = new Dog();
		Animal *a2 = new Dog( *a1 );
		delete a1;
		delete a2;
	}

	{
		std::cout << "==============MANDATORY TEST=============" << std::endl;
		Animal *animalArray[10];
		for ( int i = 0; i < 5; i++ ) {
			animalArray[i] = new Cat();
		}
		for ( int i = 5; i < 10; i++ ) {
			animalArray[i] = new Dog();
		}

		for ( int i = 0; i < 10; i++ ) {
			delete animalArray[i];
		}
		system( "leaks ex01" );
	}
	return 0;
}