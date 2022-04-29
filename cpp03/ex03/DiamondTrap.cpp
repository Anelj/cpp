#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->DiamondTrap::name = "default";
	this->ClapTrap::name = "default_clap_name";
	FragTrap fr;
	ScavTrap sc;
	attackDamage = fr.getAttackDamage();
	energyPoints = sc.getEnergyPoints();
	hitPoints = fr.getHitPoints();
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->DiamondTrap::name = name;
	this->ClapTrap::name = name + "_clap_name";
	FragTrap fr;
	ScavTrap sc;
	attackDamage = fr.getAttackDamage();
	energyPoints = sc.getEnergyPoints();
	hitPoints = fr.getHitPoints();
}

DiamondTrap::DiamondTrap(const DiamondTrap &cl)
{
	std::cout << "DiamondTrap copy constructor." << std::endl;
	*this = cl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy assignment operator." << std::endl;
	if (this != &rhs)
	{
		this->DiamondTrap::name = rhs.DiamondTrap::getName();
		this->ClapTrap::name = rhs.ClapTrap::getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << DiamondTrap::name
	<< " my ClapTrap name is: " << ClapTrap::name << std::endl;
}


const std::string &DiamondTrap::getName() const
{
	return DiamondTrap::name;
}
