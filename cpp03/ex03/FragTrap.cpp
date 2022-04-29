#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	attackDamage = 30;
	energyPoints = 100;
	hitPoints = 100;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	attackDamage = 30;
	energyPoints = 100;
	hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap &cl) : ClapTrap(cl)
{
	std::cout << "FragTrap copy constructor." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& a)
{
	std::cout << "FragTrap copy assignment operator." << std::endl;
	if (this != &a)
	{
		name = a.getName();
		hitPoints = a.getHitPoints();
		energyPoints = a.getEnergyPoints();
		attackDamage = a.getAttackDamage();
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << getName() << " attacks " << target
			  << " causing ";
	std::cout << getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap. Positive high fives request.\n";
}
