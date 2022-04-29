#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor." << std::endl;
}

Ice::Ice(const Ice& cl) : AMateria(cl)
{
	std::cout << "Ice copy constructor." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice copy assignment operator" << std::endl;
	type = rhs.type;
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
	return new Ice();
}