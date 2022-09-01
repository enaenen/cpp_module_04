#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	return 0;
}