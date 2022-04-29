#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10),
energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap() : name("default"), hitPoints(10),
energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cl)
{
	std::cout << "ClapTrap copy constructor." << std::endl;
	*this = cl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

const std::string &ClapTrap::getName() const
{
	return name;
}

unsigned int ClapTrap::getHitPoints() const
{
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return attackDamage;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints && hitPoints)
	{
		std::cout << "ClapTrap " << name << " attacks " << target
				  << " causing ";
		std::cout << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints && energyPoints)
	{
		if (hitPoints < amount)
			hitPoints = 0;
		else
			hitPoints -= amount;
		std::cout << "ClapTrap " << name << " took " << amount <<
                 " damage, hit points to " << hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints && hitPoints)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " is repaired " << amount <<
                 ", hit points to " << hitPoints << std::endl;
	}
}
