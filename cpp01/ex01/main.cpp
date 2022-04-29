#include <iostream>
#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie* zombies = zombieHorde(5, "zombie");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete [] zombies;
	return 0;
}
