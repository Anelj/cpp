#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap cl = ScavTrap("scavTrap");
	ScavTrap cl1 = ScavTrap("scavTrap1");
	cl.attack(cl1.getName());
	cl1.takeDamage(cl.getAttackDamage());
	cl1.beRepaired(cl.getAttackDamage());
	cl.guardGate();
	return 0;
}
