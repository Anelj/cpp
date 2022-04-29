#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	attackDamage = 20;
	energyPoints = 50;
	hitPoints = 100;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	attackDamage = 20;
	energyPoints = 50;
	hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &cl) : ClapTrap(cl)
{
	std::cout << "ScavTrap copy constructor." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& a)
{
	std::cout << "ScavTrap copy assignment operator." << std::endl;
	if (this != &a)
	{
		name = a.getName();
		hitPoints = a.getHitPoints();
		energyPoints = a.getEnergyPoints();
		attackDamage = a.getAttackDamage();
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target
			  << " causing ";
	std::cout << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
}
