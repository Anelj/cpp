#include <iostream>
#include "replace.hpp"

int main(int args, char *argv[])
{
	if (args != 4)
		std::cout << "Pass three arguments\n";
	replace(argv[1], argv[2],argv[3]);

	return 0;
}
