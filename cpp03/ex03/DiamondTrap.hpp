#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H


# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	std::string name;

public:
	DiamondTrap();

	DiamondTrap(const std::string &name);

	DiamondTrap(const DiamondTrap &cl);

	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap &other);

	void attack(const std::string &target);

	void whoAmI();

	const std::string &getName() const;
};


#endif
