#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor." << std::endl;
	this->type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog const &cl) : Animal(cl)
{
	std::cout << "Dog copy constructor." << std::endl;
	brain = new Brain();
	*brain = *(cl.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		*brain = *(rhs.brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << type << " barks" << std::endl;
}