#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	Weapon&		weapon;
	std::string	name;

public:

	HumanA(const std::string &name, Weapon &weapon);

	void	attack();

};


#endif
