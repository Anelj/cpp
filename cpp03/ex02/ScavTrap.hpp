#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(const std::string &name);

	ScavTrap();

	ScavTrap(const ScavTrap &cl);

	void attack(const std::string &target);

	ScavTrap& operator=(const ScavTrap& a);

	void guardGate();

	~ScavTrap();
};

#endif
