#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor." << std::endl;
}

Cure::Cure(const Cure& cl) : AMateria(cl)
{
	std::cout << "Cure copy constructor." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure copy assignment operator" << std::endl;
	type = rhs.type;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

Cure* Cure::clone() const
{
	return new Cure();
}