#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
#include "Weapon.hpp"

class HumanB
{
	Weapon*		weapon;
	std::string	name;

public:
	HumanB(const std::string &name);

	void	attack();

	void setWeapon(Weapon& weapon);

};


#endif
