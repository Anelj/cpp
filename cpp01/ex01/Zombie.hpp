#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce( void );

	void setName(const std::string &name);
};

#endif
