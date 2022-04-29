#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name)
{
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	HumanB::weapon = &weapon;
}

void	HumanB::attack()
{
	if (weapon)
	{
		std::cout << name << " attacks with their " << weapon->getType()
			<< std::endl;
	}
}
