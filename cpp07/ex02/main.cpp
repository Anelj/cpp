#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> ar;
	try
	{
		ar[0] = 5;
	}
	catch (std::exception &e)
	{
		std::cerr << "Out of bound exception\n";
	}
	ar = Array<int>(5);
	std::cout << ar << std::endl;
	for (int i = 0; i < 5; i++)
		ar[i] = i;
	std::cout << ar << std::endl;
	return 0;
}
