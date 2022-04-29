#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor." << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal &cl)
{
	std::cout << "Animal copy constructor." << std::endl;
	*this = cl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

const std::string &Animal::getType() const
{
	return type;
}
