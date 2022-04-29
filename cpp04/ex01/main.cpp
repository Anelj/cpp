#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;
	const Dog* d = new Dog();
	Dog* d1 = new Dog();
	*d1 = *d;
	d1->makeSound();
	delete d;
	delete d1;
	std::cout << std::endl;
	Animal *animals[6];
	for (int k = 0; k < 6; k++)
	{
		if ((k + 1) % 2 == 1)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}
	for (int k = 0; k < 6; k++)
		animals[k]->makeSound();
	for (int k = 0; k < 6; k++)
		delete animals[k];
	return 0;
}

/*int main()
{
	WrongCat basic;
	{
		WrongCat s = basic;
	}
}*/
