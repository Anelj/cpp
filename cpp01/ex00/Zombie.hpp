#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce( void );
};

#endif
