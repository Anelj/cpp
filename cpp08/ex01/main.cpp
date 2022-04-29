#include <iostream>
#include <algorithm>
#include "Span.hpp"

int uniqueNumber()
{
	return rand();
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	int myarray[10000];
	std::generate_n(myarray, 10000, uniqueNumber);
	Span sp1(10000);
	sp1.addNumber(myarray, myarray + 10000);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	return 0;

}
