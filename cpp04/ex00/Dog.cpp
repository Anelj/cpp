#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &cl) : Animal(cl)
{
	std::cout << "Dog copy constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << type << " barks" << std::endl;
}