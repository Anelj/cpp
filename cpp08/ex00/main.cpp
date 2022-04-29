#include <iostream>
#include "easyfind.h"
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> vect(3, 100);
	int myarray [] = { 501,502,503 };
	vect.insert(vect.begin(), myarray, myarray + 3);
	try
	{
		std::cout << "found: " << *easyfind(vect, 1100) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "value was not found.\n";
	}

	std::list<int> list;
	list.insert(list.begin(), vect.begin(), vect.end());
	try
	{
		std::cout << "found: " << *easyfind(list, 100) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "value was not found.\n";
	}

	std::deque<int> deque;
	deque.insert(deque.begin(), list.begin(), list.end());
	try
	{
		std::cout << "found: " << *easyfind(deque, 501) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "value was not found.\n";
	}
	return 0;
}
