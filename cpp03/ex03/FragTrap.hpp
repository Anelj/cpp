#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap(const std::string &name);

	FragTrap();

	FragTrap(const FragTrap &cl);

	void attack(const std::string &target);

	FragTrap& operator=(const FragTrap& a);

	void highFivesGuys(void);

	~FragTrap();
};


#endif
