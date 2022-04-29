#include "ClapTrap.hpp"

int main()
{
	ClapTrap cl = ClapTrap("clapTrap");
	ClapTrap cl1 = ClapTrap("clapTrap1");
	cl.attack(cl1.getName());
	cl1.takeDamage(cl.getAttackDamage());
	cl1.beRepaired(cl.getAttackDamage());
	return 0;
}
