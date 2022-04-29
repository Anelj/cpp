#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie z1("z1");
	z1.announce();

	randomChump("z2");

	Zombie* z3 = newZombie("z3");
	z3->announce();
	delete z3;
	
	return 0;
}
