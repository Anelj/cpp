#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal a;
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
	return 0;
}

/*int main()
{
	WrongCat basic;
	{
		WrongCat s = basic;
	}
}*/
