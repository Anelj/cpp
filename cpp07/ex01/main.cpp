#include <iostream>
#include "iter.h"

template <typename T>
void display(T &i)
{
	std::cout << i;
}

template <>
void display(char &i)
{
	std::cout << (char) toupper(i);
}

int main()
{
	int ints[] = {1, 2, 3, 4, 5};
	iter<int>(ints, 5, &display);
	std::cout << std::endl;
	char chars[] = {'a', 'b', 'c', 'd'};
	iter<char>(chars, 4, &display);
	std::cout << std::endl;
	return 0;
}
