#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	{
		const Animal* animal = new Dog();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		animal->makeSound();
		dog->makeSound();
		cat->makeSound();
		delete animal;  // should not create a leak

		delete dog;
		delete cat;
	}

	// Animal ArrayTEST
	{
		Animal* animalArray[10];

		for ( int i = 0; i < 10; i++ ) {
			if ( i % 2 == 0 )
				animalArray[i] = new Dog();
			else
				animalArray[i] = new Cat();
		}

		for ( int i = 0; i < 10; i++ ) delete animalArray[i];
	}

	{
		std::cout << "==============BRAIN TEST================" << std::endl;
		Dog dog = Dog();
		dog.setBrain( 0, "DOGGY DOGGY" );
		dog.setBrain( 1, "I WANT BONES" );
		Dog dog2 = Dog( dog );
		std::cout << "==============DOG 1 BRAIN================" << std::endl;
		dog.printBrainIdeas();
		std::cout << "==============DOG 2 BRAIN================" << std::endl;
		dog2.printBrainIdeas();
		std::cout << "==============DOG 2 BRAIN CHANGE=========" << std::endl;
		dog2.setBrain( 0, "NONONO" );
		dog2.setBrain( 1, "YESYESYES" );
		dog2.printBrainIdeas();
		std::cout << "==============DOG 1 BRAIN================" << std::endl;
		dog.printBrainIdeas();
	}

	{
		std::cout << "==============DOUBLE FREE TEST=============" << std::endl;
		Animal* animalArray[10];
		for ( int i = 0; i < 5; i++ ) {
			animalArray[i] = new Cat();
		}
		for ( int i = 5; i < 10; i++ ) {
			animalArray[i] = new Dog();
		}

		for ( int i = 0; i < 10; i++ ) {
			delete animalArray[i];
		}
	}
	system( "leaks ex01" );

	return 0;
}