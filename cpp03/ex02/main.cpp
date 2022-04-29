#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap cl = FragTrap("fragTrap");
	FragTrap cl1 = FragTrap("fragTrap1");
	cl.attack(cl1.getName());
	cl1.takeDamage(cl.getAttackDamage());
	cl1.beRepaired(cl.getAttackDamage());
	cl.highFivesGuys();
	return 0;
}
