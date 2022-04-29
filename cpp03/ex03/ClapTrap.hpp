#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	ClapTrap(const std::string &name);

	ClapTrap();

	ClapTrap(ClapTrap const &cl);

	ClapTrap& operator=(const ClapTrap &rhs);

	void attack(const std::string& target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	const std::string &getName() const;

	unsigned int getHitPoints() const;

	unsigned int getEnergyPoints() const;

	unsigned int getAttackDamage() const;

	~ClapTrap();
};


#endif
