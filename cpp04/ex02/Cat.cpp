#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cl) : Animal(cl)
{
	std::cout << "Cat copy constructor." << std::endl;
	brain = new Brain();
	*brain = *(cl.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		*brain = *(rhs.brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << type << " meows" << std::endl;
}
