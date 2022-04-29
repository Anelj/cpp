#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Dog* j1 = new Dog();
	const Animal* j = new Dog(*j1);
	const Animal* i = new Cat();
	const WrongAnimal* wrongAnimal = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete meta;
	delete j1;
	delete j;
	delete i;
	delete wrongAnimal;
	delete wrongCat;
	return 0;
}
