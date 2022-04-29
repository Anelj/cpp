#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap cl = DiamondTrap("jk");
	cl.attack("somebody");
	cl.beRepaired(5);
	cl.whoAmI();
	cl.highFivesGuys();
	cl.guardGate();
	return 0;
}
