#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cl) : WrongAnimal(cl)
{
	std::cout << "WrongCat copy constructor." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << type << " meows" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
