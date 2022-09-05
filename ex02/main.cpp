#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"

int main() {
	{
		std::cout << "==============MANDATORY TEST=============" << std::endl
				  << std::endl;
		// const AAnimal* x = new AAnimal();
		// AAnimal aa;

		const AAnimal* i = new Dog();
		const AAnimal* j = new Cat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();

		delete i;
		delete j;

		std::cout << std::endl;
	}
	return 0;
}