#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor." << std::endl;
	type = "WrongCat";
	brain = new Brain();
}

WrongCat::WrongCat(WrongCat const &cl) : WrongAnimal(cl)
{
	std::cout << "WrongCat copy constructor." << std::endl;
	//delete brain;
	this->brain = cl.brain;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		//delete brain;
		brain = rhs.brain;
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
	delete brain;
}

Brain *WrongCat::getBrain() const
{
	return brain;
}
