#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	this->name = "defName";
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string &name)
{
	Zombie::name = name;
}
