#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &cl) : Animal(cl)
{
	std::cout << "Cat copy constructor." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << type << " meows" << std::endl;
}
