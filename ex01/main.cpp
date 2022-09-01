#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	{
		std::cout << "==============MANDATORY TEST=============" << std::endl
				  << std::endl;
		const Animal* meta = new Animal();
		const Animal* i = new Dog();
		const Animal* j = new Cat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		i->makeSound();  // will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;

		std::cout << std::endl;
	}

	{
		std::cout << "==============WRONG ANIMAL TEST=============" << std::endl
				  << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;

		std::cout << std::endl;
	}
	return 0;
}