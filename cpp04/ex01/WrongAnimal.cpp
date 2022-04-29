#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor." << std::endl;
	type = "Animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &cl)
{
	std::cout << "WrongAnimal copy constructor." << std::endl;
	*this = cl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

const std::string &WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << type << " makes sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
