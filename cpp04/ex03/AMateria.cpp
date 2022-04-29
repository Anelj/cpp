#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor." << std::endl;
	this->type = "default_amateria";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria constructor." << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& cl)
{
	std::cout << "AMateria copy constructor." << std::endl;
	*this = cl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &rhs)
{
	std::cout << "AMateria copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}


const std::string &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}